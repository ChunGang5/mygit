#include<iostream>
#include"sqlite3.h"
using namespace std;

class ScanManager
{
public:
	ScanManager();
	~ScanManager();

	ScanManager& operator=(const ScanManager&) = delete;	//C++11的做法，意味着不能使用这个函数

	void Open(const std::string& path);
	void Close();

	void ExecuteSql(const std::string& sql);	//执行SQL语句
	void GetResTable(const std::string& sql, int& row, int& col, char**&ppRet);	//获取表结果

private:
	ScanManager(const ScanManager&);
	sqlite3 *m_db;
};

ScanManager::ScanManager() :m_db(nullptr)
{}
ScanManager::~ScanManager()
{
	sqlite3_close(m_db);
}
void ScanManager::Open(const std::string& path)
{
	int rc=sqlite3_open(path.c_str(), &m_db);
	if (rc != SQLITE_OK)
	{
		cout << "Can't open database!" << endl;
		return;
	}
	else
	{
		printf("Opened database successfully\n");
	}
}
void ScanManager::ExecuteSql(const std::string& sql)
{
	//sqlite3_exec(sqlite3*, const char *sql, sqlite_callback, void *data, char **errmsg)
	char *zErrMsg = 0;

	int rc=sqlite3_exec(m_db, sql.c_str(), 0, 0, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		printf("SQL error(sql:%s): %s\n",sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		printf("ExecuteSql(sql:%s) successfully\n",sql.c_str());
	}
}
void ScanManager::GetResTable(const std::string& sql, int& row, int& col, char**&ppRet)
{
	char *zErrMsg = 0;
	int rc=sqlite3_get_table(m_db, sql.c_str(), &ppRet, &row, &col, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		printf("GetResTable error(sql:%s): %s\n", sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		printf("GetResTable(sql:%s) successfully\n");
	}

}
void ScanManager::Close()
{
	if (m_db)
	{
		int rc=sqlite3_close(m_db);
		if (rc != SQLITE_OK)
		{
			printf("Close database fail!\n");
			return;
		}
		else
		{
			printf("Close database successfully\n");
		}
		m_db = nullptr;
	}
	
}
int main()
{
	ScanManager sm;
	string path = "doc.db";
	sm.Open(path);	//打开/创建一个名为doc.db的数据库
	string sql = "create table if not exists m_tb(id int primary key,doc_name text,doc_path text)";
	sm.ExecuteSql(sql);
	/*sql = "insert into m_tb values(3,'cakl','C:\\test')";
	sm.ExecuteSql(sql);*/
	sql = "select * from m_tb";
	int row = 0, col = 0;
	char **ppRet = 0;
	sm.GetResTable(sql, row, col, ppRet);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ppRet[i*col + j] << "	";
		}
		cout << endl;
	}
	cin.get();
	return 0;
}







//pragma comment(lib,"sqlite3.lib")
//int main(int argc, char* argv[])
//{
//	sqlite3 *db;
//	char *zErrMsg = 0;
//	int rc;
//
//	rc = sqlite3_open("test.db", &db);
//
//	if (rc){
//		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
//		exit(0);
//	}
//	else{
//		fprintf(stderr, "Opened database successfully\n");
//	}
//	//char *sql = "create table t_doc(id integer primary key Autoincrement,doc_name text,doc_path text);";
//	char *sql = "insert into t_doc values(null,'c.pdf','c:\\test')";
//	rc=sqlite3_exec(db, sql, 0, 0, &zErrMsg);
//	if (rc != SQLITE_OK){
//		fprintf(stderr, "SQL error: %s\n", zErrMsg);
//		sqlite3_free(zErrMsg);
//	}
//	else{
//		fprintf(stdout, "Table created successfully\n");
//	}
//	sqlite3_close(db);
//	cin.get();
//}
//static int callback(void *data, int argc, char **argv, char **azColName){
//	int i;
//	fprintf(stderr, "%s: ", (const char*)data);
//	for (i = 0; i<argc; i++){
//		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
//	}
//	printf("\n");
//	return 0;
//}

//int main(int argc, char* argv[])
//{
//	sqlite3 *db;
//	char *zErrMsg = 0;
//	int rc;
//	char *sql;
//	const char* data = "Callback function called";
//
//	/* Open database */
//	rc = sqlite3_open("test.db", &db);
//	if (rc){
//		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
//		exit(0);
//	}
//	else{
//		fprintf(stderr, "Opened database successfully\n");
//	}
//
//	/* Create SQL statement */
//	sql = "SELECT * from t_doc";
//
//	/* Execute SQL statement */
//	char **pazResult = 0;
//	int row = 0, col = 0;
//
//	rc=sqlite3_get_table(db, sql, &pazResult, &row, &col, &zErrMsg);
//	//rc = sqlite3_exec(db, sql, 0, 0, &zErrMsg);
//	if (rc != SQLITE_OK){
//		fprintf(stderr, "SQL error: %s\n", zErrMsg);
//		sqlite3_free(zErrMsg);
//	}
//	else{
//		fprintf(stdout, "Operation done successfully\n");
//	}
//	
//	for (int i = 1; i < row; ++i)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << pazResult[i*col + j] ;
//			cout << "	";
//		}
//		cout << endl;
//	}
//	sqlite3_free_table(pazResult);
//	sqlite3_close(db);
//	cin.get();
//	return 0;
//}
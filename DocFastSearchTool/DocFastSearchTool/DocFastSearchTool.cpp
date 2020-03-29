#include"Common.h"
#include"Sysutil.h"
#include"DataManager.h"
#include"ScanManager.h"

//void Test_Directory()
//{
//	string path = "G:\\桌面\\比特科技";
//	vector<string> subfile, subdir;
//	DirectoryList(path,subfile,subdir);
//	for (auto &e : subfile)
//		cout << e << endl;
//	for (auto &e : subdir)
//		cout << e << endl;
//}
void Test_Search()
{
	//创建扫描实例
	const string path = "G:\\桌面\\比特科技\\书籍";
	ScanManager sm;
	sm.ScanDirectory(path);

	//创建搜索实例
	string key;
	vector<pair<string, string>> doc_path; //用于保存搜索的结果

	DataManager dm;

	//
	while (1)
	{
		cout << "请输入要搜索的关键字:>";
		cin >> key;
		dm.Search(key, doc_path);
		//显示结果
		printf("%-30s%-50s\n", "名称", "路径");
		for (auto &e : doc_path)
		{
			string &name = e.first; //
			string &path = e.second;
			printf("%-30s%-50s\n", name.c_str(), path.c_str());
		}

		doc_path.clear();
	}
}
int main(int argc, char *argv[])
{
	
	Test_Search();
	cin.get();
	return 0;
}
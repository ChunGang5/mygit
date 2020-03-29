#include"Common.h"
#include"Sysutil.h"
#include"DataManager.h"
#include"ScanManager.h"

//void Test_Directory()
//{
//	string path = "G:\\����\\���ؿƼ�";
//	vector<string> subfile, subdir;
//	DirectoryList(path,subfile,subdir);
//	for (auto &e : subfile)
//		cout << e << endl;
//	for (auto &e : subdir)
//		cout << e << endl;
//}
void Test_Search()
{
	//����ɨ��ʵ��
	const string path = "G:\\����\\���ؿƼ�\\�鼮";
	ScanManager sm;
	sm.ScanDirectory(path);

	//��������ʵ��
	string key;
	vector<pair<string, string>> doc_path; //���ڱ��������Ľ��

	DataManager dm;

	//
	while (1)
	{
		cout << "������Ҫ�����Ĺؼ���:>";
		cin >> key;
		dm.Search(key, doc_path);
		//��ʾ���
		printf("%-30s%-50s\n", "����", "·��");
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
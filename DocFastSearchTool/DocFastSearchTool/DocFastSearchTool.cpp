#include"Common.h"
#include"Sysutil.h"

void Test_Directory()
{
	string path = "G:\\����\\���ؿƼ�";
	vector<string> subfile, subdir;
	DirectoryList(path,subfile,subdir);
	for (auto &e : subfile)
		cout << e << endl;
	for (auto &e : subdir)
		cout << e << endl;
}
int main(int argc, char *argv[])
{
	Test_Directory();
	cin.get();
	return 0;
}
#include"Common.h"
#include"Sysutil.h"

void Test_Directory()
{
	string path = "G:\\����\\���ؿƼ�";
	vector<string> subfile, subdir;
	DirectoryList(path,subfile,subdir);
}
int main(int argc, char *argv[])
{
	Test_Directory();
	cin.get();
	return 0;
}
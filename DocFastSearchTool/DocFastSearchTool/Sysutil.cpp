#include"Sysutil.h"

void DirectoryList(const string& path, vector<string> &subfile, vector<string> &subdir)
{
	string _path = path;
	_path += "\\*.*";	//通配符：* % ?
	struct _finddata_t file;
	long handle = _findfirst(_path.c_str(), &file);
	if (handle == -1)
	{
		cerr << "_findfirst error" << endl;
		return;
	}
	do
	{	//一些隐藏的.文件夹根本不知道里面是什么，有多少东西，太多程序显示找的太多了
		if (file.name[0] == '.')
		{
			continue;
		}
		//_A_SUBDIR	//标识是否是文件的一个宏，usingint
		if (file.attrib&_A_SUBDIR)
		{
			subdir.push_back(file.name);
		}
		else
		{
			subfile.push_back(file.name);
		}
	} while (_findnext(handle,&file)==0);

#if 0
	for (auto &e : subfile)
	{
		cout << e << endl;
	}
	for (auto &e : subdir)
	{
		cout << e << endl;
		vector<string> _subfile, _subdir;
		string tmp_path=path;
		tmp_path += "\\";
		tmp_path += e;
		DirectoryList(tmp_path, _subfile, _subdir);
	}
#endif

	_findclose(handle);

}
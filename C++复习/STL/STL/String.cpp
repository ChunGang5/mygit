#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	s1 = "Hello world!";
	/*s1.reserve(40);
	s1.reserve(10);
	s1.resize(20, '&');
	s1.resize(10);*/
	//string::iterator it = s1.begin();
	//while (it != s1.end())
	//{
	//	cout << *it++ << endl;
	//}
	string::reverse_iterator it = s1.rbegin();
	while (it != s1.rend())
	{
		cout << *it++ << endl;
	}
	
	/*for (auto ch : s1)
	{
		cout << ch << endl;
	}*/
	cin.get();
	return 0;
}
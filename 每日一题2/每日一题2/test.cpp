//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		vector<string> str;
//		string temp;
//		for (int i = 0; i<s.size(); i++)
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z' || s[i] >= 'a'&&s[i] <= 'z')
//			{
//				temp += s[i];
//			}
//			else
//			{
//				if (temp.size()>0)
//				{
//					str.push_back(temp);
//					temp.clear();
//				}
//			}
//		}
//		if (temp.size() > 0)
//		{
//			str.push_back(temp);
//		}
//		
//		for (int i = str.size() - 1; i >= 0; --i)
//		{
//			cout << str[i] << ' ';
//		}
//		cout << endl;
//	}
//	cin.get();
//	return 0;
//}

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		map<char, int> A, B;
		for (int i = 0; i<s1.size(); i++)
		{
			A[s1[i]]++;
		}
		for (int i = 0; i<s2.size(); i++)
		{
			B[s2[i]]++;
		}
		for (int i = 'A'; i <= 'Z'; i++)
		{
			if (B[i]>A[i])
			{
				cout << "No" << endl;
				break;
			}
			if (i == 'Z')
			{
				cout << "Yes" << endl;
			}
		}
	}
	return 0;
}
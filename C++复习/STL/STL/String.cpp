#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	string s1;
//	s1 = "Hello world!";
//	/*s1.reserve(40);
//	s1.reserve(10);
//	s1.resize(20, '&');
//	s1.resize(10);*/
//	//string::iterator it = s1.begin();
//	//while (it != s1.end())
//	//{
//	//	cout << *it++ << endl;
//	//}
//	string::reverse_iterator it = s1.rbegin();
//	while (it != s1.rend())
//	{
//		cout << *it++ << endl;
//	}
//	
//	/*for (auto ch : s1)
//	{
//		cout << ch << endl;
//	}*/
//	cin.get();
//	return 0;
//}

//int main()
//{
//	string s = "ajdijaio";
//	string s1("jkaq");
//	s.push_back('a');
//	s.append(5, '&');
//	s += '^';
//	s += "Hello";
//	cin.get();
//	return 0;
//}

//int main()
//{
//	string s1;
//	while (getline(cin, s1))
//	{
//		int n = 0;
//		int pos = s1.rfind(' ');
//		pos += 1;
//		while (s1[pos] != '\0')
//		{
//			pos++;
//			++n;
//		}
//		cout << n << endl;
//	}
//	return 0;
//}

class Solution {
public:
	string reverseOnlyLetters(string S)
	{
		char* left = (char*)S.c_str();
		int n = S.size() - 1;
		char* right = left + n;
		while (left<right)
		{
			//��ǰ�����ң��ҵ��ַ����ĵ�һ���ַ�
			while (left<right)
			{
				if (isalpha(*left))
				{
					break;
				}
				//���ǵĻ�ָ�����
				++left;
			}
			//�Ӻ���ǰ�ҵ����һ���ַ�
			while (right>left)
			{
				if (isalpha(*right))
				{
					break;
				}
				--right;
			}
			//���left��rightָ��ͬһ���ַ�����������
			if (left<right)
			{
				swap(*left, *right);
				++left;
				--right;
			}
		}
		return S;
	}
	string S = ("ab - cd");
};

int main()
{
	Solution S1;
	string S = ("ab - cd");
	S1.reverseOnlyLetters(S);
	cin.get();
	return 0;
}
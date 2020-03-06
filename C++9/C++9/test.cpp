#include<iostream>
#include<string>

using namespace std;
//
//int main()
//{
//
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n[100] = { 1, 2 };
//	for (int i = 2; i < 100; i++)
//	{
//		n[i] = n[i - 1] + n[i - 2];
//	}
//	int day;
//	while (cin >> day)
//	{
//		cout << n[day - 1] << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//
//int main()
//{
//	TestFunc();
//	cin.get();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//	cin.get();
//	return 0;
//}

int main()
{
	int a = 10;
	int& ra = a;
	ra = 20;
	int* pa = &a;
	*pa = 20;
	cout << sizeof(nullptr) << endl;
	cin.get();
	return 0;
}
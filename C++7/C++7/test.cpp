#include<iostream>
#include<string>
#include<vector>
#include<array>

using namespace std;

//const int ArSize = 8;
//int sum_arr(int *arr, int n);	//函数头或函数原型中是一样的与int arr[];都代表着是一个指针，也就是数组首元素地址
//
//int main()
//{
//	int cookies[ArSize] = { 1, 2, 5, 8, 6, 4, 7, 9 };
//	int sum = sum_arr(cookies, ArSize);
//	cout << sum << endl;
//	cin.get();
//	return 0;
//}
//int sum_arr(int arr[], int n)
//{
//	int total = 0;
//	for (int i = 0; i < n; i++)
//	{
//		total += arr[i];
//	}
//	return total;
//}

//void countdown(int n);
//int main()
//{
//	countdown(4);
//	cin.get();
//	return 0;
//}
//
//void countdown(int n)
//{
//	cout << "Countting down ... " << n << "(n at " << &n << " )\n";
//	if (n > 0)
//		countdown(n-1);
//	cout << n << " : Kaboom!\n";
//}
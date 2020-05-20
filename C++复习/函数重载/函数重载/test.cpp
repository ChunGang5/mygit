#include<iostream>
#include<stdlib.h>
#include"Head.h"
using namespace std;
//double Add(double a, double b)
//{
//	return a + b;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//extern "C" int Add(int a, int b);
//int main()
//{
//	//二义性，编译器不通过
//	//Add(1.0, 1);
//	//Add(1.0, 1); 
//	Add(1,2);
//	cin.get();
//	return 0;
//}

//引用做返回值出现的问题
//int& ADD(int a, int b)
//{
//	int tmp = a + b;
//	return tmp;
//}
//void print(int a)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	int& ret = ADD(1, 2);
//	cout << ret << endl;
//	print(5);
//	ADD(3, 4);
//	cout << ret << endl;
//	cin.get();
//	return 0;
//}

int main()
{
	/*char* s = "computer";
	printf("%s\n", s);
	printf("%10s\n", s);
	printf("%.5s\n", s);
	printf("%0.10s\n", s);
	printf("%-.5s\n", s);*/
	//printf("%*.*s\n", s);
	//printf("Hello\n");
	/*int arr[5] = { 1, 2, 3, 4, 5 };
	int* pr= (int*)arr[4];*/
	/*int a[] = { 1, 2, 3, 4 };
	int *b = a;
	*b += 2;
	*(b + 2) = 2;
	b++;
	printf("%d, %d\n", *b, *(b + 2));
	cin.get();
	return 0;*/

	int ret = Add(1, 7);
	cout << ret << endl;
	ret = Add(7, 9);
	cout << ret << endl;
	cin.get();
	return 0;
}


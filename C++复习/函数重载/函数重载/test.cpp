#include<iostream>
#include<stdlib.h>
#include<vector>

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

//int main()
//{
//	/*char* s = "computer";
//	printf("%s\n", s);
//	printf("%10s\n", s);
//	printf("%.5s\n", s);
//	printf("%0.10s\n", s);
//	printf("%-.5s\n", s);*/
//	//printf("%*.*s\n", s);
//	//printf("Hello\n");
//	/*int arr[5] = { 1, 2, 3, 4, 5 };
//	int* pr= (int*)arr[4];*/
//	/*int a[] = { 1, 2, 3, 4 };
//	int *b = a;
//	*b += 2;
//	*(b + 2) = 2;
//	b++;
//	printf("%d, %d\n", *b, *(b + 2));
//	cin.get();
//	return 0;*/
//	vector<int> m(10);
//	vector<vector<int>> grid(10, vector<int>(10, 1));
//	int ret = Add(1, 7);
//	cout << ret << endl;
//	ret = Add(7, 9);
//	cout << ret << endl;
//	cin.get();
//	return 0;
//}


//class A
//{
//public:
//	static const int a = 1;
//	static const double c= 13.50;
//	static int b;
//};
//int A::b = 1;
//class Test
//{
//public:
//	Test()
//		: _data(0)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _data;
//};
//void Test2()
//{
//	// 申请单个Test类型的空间
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	free(p1);
//	// 申请10个Test类型的空间
//	Test* p2 = (Test*)malloc(sizeof(Test) * 10);
//	free(p2);
//}
//int main()
//{
//	/*int *p = new int(100);
//	int *ptr = new int[10]{1,2,3,4,5,7,6};
//	int *ptr1 = (int*)malloc(sizeof(int));*/
//	/*Test2();
//	_CrtDumpMemoryLeaks();*/
//	/*volatile int i = 0;
//	int j = i;
//	int k = i;
//	const volatile int a = 10;*/
//	//Yes
//	extern int i;
//	//NO
//	extern double j;
//	j = 3.0;
//	//Yes
//	extern void fun(void);
//	cin.get();
//	return 0;
//}

//extern "C" int Add(int left, int right);
//int main()
//{
//	Add(1, 2);
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(sizeof(int));
//	realloc(p, 20);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <Windows.h>
#include <assert.h>

//模拟实现strlen()
//方法一
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str++!='\0')
//	{
//		count++;
//	}
//	return count;
//}

//指针-指针
//int my_strlen(char *str)
//{
//	char *p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//
//}

int my_strlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str++);
	}
}
int main()
{
	char *str = "abcdefg";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}
////快速排序
//int Partition(int a[], int i, int j)
//{
//	int temp = a[i];
//	while (i < j)
//	{
//		while (a[j] >= temp&&j>i)
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			a[i] = a[j];
//			i++;
//		}
//		while (a[i] <= temp&&j>i)
//		{
//			i++;
//		}
//		if (i < j)
//		{
//			a[j] = a[i];
//			j--;
//		}	
//	}
//	a[i] = temp;
//	return i;
//}
//void QuickSort(int a[], int i, int j)
//{
//	int k;
//	if (i < j)
//	{
//		k = Partition(a, i, j);
//		QuickSort(a, i, k - 1);
//		QuickSort(a, k + 1, j);
//	}
//}
//int main()
//{
//	int arr[8] = { 4, 3, 7, 1, 2, 8, 6, 5 };
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]) - 1;
//	QuickSort(arr, i, j);
//	for (int k = 0; k <= j; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	system("pause");
//	return 0;
//}

//typedef struct student
//{
//	char name[10];
//	int age;
//}s;

//int main()
//{
//	/*struct student std1 = { "chengang", 22 };*/
//	//s std1 = { "chengang", 22 };
//	//printf("%s\n", std1.name);
//	const int n = 10;
//	scanf("%d", &n);
//	int arr[n] = {};
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[] = "Hello world!";
//	char *ptr = NULL; 
//
//	ptr = strstr(str, "worl");
//	printf("%s\n", ptr);
//	system("pause");
//	return 0;
//}

//模拟实现strstr()函数
//char *my_strstr(const char *str1,char *str2)
//{
//	assert(str1);
//	assert(str2);
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	char *cp = (char*)str1;
//	char *sub_str = (char*)str2;
//	char *s1 = NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		sub_str = str2;
//		while (*s1&&*sub_str && (*s1 == *sub_str))
//		{
//			s1++;
//			sub_str++;
//		}
//		if (*sub_str == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//
//}
//int main()
//{
//	char str[] = "I am zhanan";
//	char *ptr = NULL;
//	ptr=my_strstr(str, "am");
//	printf("%s\n", ptr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	string s1, s2;
//	cin >> s1;
//	cin >> s2;
//	int i = 0;
//	int s1_num = 0;
//	int s2_num = 0;
//	s1_num = s1.length();
//	s2_num = s2.length();
//	for (i = 0; i < s1_num; i++)
//	{
//		s1[i] = tolower(s1[i]);
//	}
//	for (i = 0; i < s2_num; i++)
//	{
//		s2[i] = tolower(s2[i]);
//	}
//	if (s1_num > s2_num)
//	{	//s2_num
//		for (i = 0; i < s2_num; i++)
//		{
//
//		}
//	}
//	return 0;
//}

//反向输出字符串
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//	}
//	while (i--)
//	{
//		cout << str[i];
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int *p = &a;
//	//*p = 5;
//	printf("%d\n", *p);
//	//printf("%d\n", *pc);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	char *pi = &n;
//	*pc = 0x55;//重点在调试的过程中观察内存的变化。
//	*pi = 0; //重点在调试的过程中观察内存的变化。
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*(p+i) = i;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d	", *(p+i));
//	}
//	system("pause");
//	return 0;
//}

#include<string.h>

//int mu_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
/*实现以恶搞my_strlen()函数*/
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;	//指针减指针等于两指针之间元素的个数
//
//}
//int main()
//{
//	char a[] = "abcdef";
//	int my_strle;
//	printf("%d\n", my_strlen(a));
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%p\n", p);
//	printf("%p\n", pp);
//
//	char b = 'c';
//	char* pb = &b;
//	char** ppb = &pb;
//	printf("%c\n", **ppb);
//	system("pause");
//	return 0;
//}

//int main()
//{	
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[3] = { &a, &b, &c };
//	printf("%d\n", **arr);		//数组名是数组首元素地址，*arr = &a;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	/*int *p;
//	*p = NULL;*/	//没有给p存储的位置放地址，容易导致内存访问出错，*p根本就不知道给哪里放那个NULL
//	/*int i = 10;
//	int * p = &i;
//	*p = NULL;*/
//
//	char *p = "abcdef";
//	char a[] = "123456";
//	printf("%c\n", *(p + 4));
//	printf("%c\n", p[4]);	//数组下标的访问形式其实就是类似于指针的访问形式；为什么数组名表示数组首元素地址
//							//数组在内存中连续存储；其原因有一点就是它是从首元素地址开始以指针+整数的形式访问的
//							//那么指针也可以以这种方式来进行访问；数组本身没有地址
//	printf("%c\n", *(a + 2));
//	printf("%c\n", a[2]);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int a[5] = { 1, 2, 3, 4, 5 };
//	//int *ptr = (int *)(&a + 1);		//按照其偏移量*类型的形式偏移
//	//printf("%d %d\n", *(a + 1), *(ptr - 1));
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[5] = &a;
//	char(*p4)[5] = a;	//左右两边类型不一致，左边定义的是指向整个数组的指针；而右边给出的地址确实数组首元素下标的地址
//						//无法编译通过
//	system("pause");
//	return 0;
//}


//void fun(char * p)
//{
//	char c = p[3];
//}
//int main()
//{
//	char* p = "abcdef";
//	fun(p);	//不能把指针变量传递给一个函数 传进去的只是一份临时拷贝,c和p的地址差得远
//	system("pause");
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	float b = 0.200000;
//	printf("%d\n", b);
//	printf("%f\n", a);*/
//	/*char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
//	printf("%s\n", str);
//	int a[3] = { 1, 2, 3 };
//	printf("%d\n", a + 1);*/
//
//	/*int a = 1;
//	int b = 0;
//	b = a++;
//	printf("%d\n", b);*/
//
//	/*int a = 010;
//	printf("%d\n", a);*/
//
//	/*int *p = NULL;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	int a[100];
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[100]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(&a[0]));
//
//	int b[100];
//	void fun(int b[100])
//	{
//		printf("%d\n", sizeof(b));
//	}*/
//
//	system("pause");
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//
//int dive(int x, int y)
//{
//	return x / y;
//}
//
//
//
//int main()
//{
//	int select = 1;
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[5])(int x ,int y ) = {add, sub, mul, dive };
//	while (select)
//	{
//		printf("**************************\n");
//		printf("******1.add		2.sub*******\n");
//		printf("******3.mul		4.dive*****\n");
//		printf("**************************\n");
//		printf("请选择\n");
//		scanf("%d", &select);
//		if (select >= 1 && select <= 4)
//		{
//			printf("请输入你要计算的数字\n");
//			scanf("%d%d", &x, &y);	//重打了一遍scanf之后就好了？不知道为什么？
//			ret = (*(p[select-1]))(x, y);
//			
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		switch (i)
//		{
//		case 0.1:
//			break;
//		case A:
//			break;
//		case -1:
//			break;
//		case 3/2:
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//int check()
//{
//	int i = 1;
//	return (*(char*)&i);	//将i的地址强转为char*(就等于取出i的第一个字节的地址)，然后解引用，如果是小端=1：0x01 000000，大端0；0x00 000001
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	if (ret == 0)
//	{
//		printf("大端\n");
//	}
//	system("pause");
//}

//利用联合体（union）只在同一块内存里改变，修改一个成员会影响其余所有成员的特性求大小端
//union check
//{
//	int i;
//	int c;
//}un;
//
//int main()
//{
//	un.i = 1;
//	if (un.c == 1)
//	{
//		printf("小端\n");
//	}
//	if (un.c == 0)
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "abc";
//	if (strlen(str2) - strlen(str1) > 0)	//因为strlen()函数的返回值是size_t,是无符号的整型，所以此条件永远成立
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("str1>str2\n");
//	}
//	system("pause");
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokes:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//
//	}
//	system("pause");
//	return 0;
//}

//qsort		回调函数
//int com_big(const void* px,const void* py)
//{
//	int* px_ = (int*)px;
//	int* py_ = (int*)py;
//	if (*px_ > *py_)
//	{
//		return 1;
//	}
//	else if (*px_ < *py_)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 85, 65, 31, 324, 86, 148, 12 };
//	int arr_size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arr_size, sizeof(int),com_big);
//	system("pause");
//	return 0;
//}

//冒泡排序-升序
//int main()
//{
//	int arr[5] = { 3, 5, 10, 8, 9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int tep = 0;
//	for (i = 0; i < num - 1 ; i++)	//5个数只能比较四次
//	{
//		int j;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//			}
//			
//		}
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

/*一个数组内除了两个不同的数，其它数都是成对出现的，找出那两个单独的数并输出
void FindTwoDiff(int arr[], int num, int *px, int *py)
{
	int temp = arr[0];
	int i = 0;
	for (i = 1; i < num; i++)	//先将数组内的数据全部异或，得到一个肯定不是0的数
	{
		temp ^= arr[i];
	}
	int pos = 0;
	while (temp)
	{
		if (((temp >> pos) & 1))	//找出异或的到的那个数的最低位起第一个不为0的位
		{
			break;
		}
		pos++;
	}
	*px = 0;
	*py = 0;
	for (i = 0; i < num; i++)
	{
		if ((arr[i] >> pos) & 1)
		{
			//现在本数组里只剩两个数了，找出pos位是1的数
			*px ^= arr[i];
		}
		else
		{
			//找出pos位为0的数
			*py ^= arr[i];
		}
	}

}
int main()
{
	int arr[] = { 1, 2, 3, 1, 2, 4, 3, 5 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	FindTwoDiff(arr, num, &x, &y);	//out_type_data
	printf("%d,%d", x, y);
	system("pause");
	return 0;
}
*/

//int main()
//{
//	int a = 10;
//	printf("%d", a >> 2);	
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//
//int sum(int month_)
//{
//	int month = month_;
//	if (month < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return sum(month - 2) + sum(month - 1);
//	}
//}
//int main()
//{
//	int month = 0;
//	while (scanf("%d", &month)!=EOF)
//	{
//		int ret = 0;
//		ret = sum(month);
//		printf("%d\n", ret);
//	}
//	
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	
//	int i = 0;
//	scanf("%d", &month);
//	if (month < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 3; i <= month; ++i)
//		{
//			int num1 = 1;
//			int num2 = 1;
//			int temp;
//			temp = num1 + num2;
//			num1 = num2;
//			num2 = temp;
//		}
//		printf("%d\n", temp);
//	}
//	system("pause");
//	return 0;
//}


//enum Color
//{
//	green = 1,
//	red = 2,
//	yellow = 3,
//};
//int main()
//{
//	enum Color cl;
//
//	char arr[] = "/ddd10";
//	int a= 10;
//
//	cl = red;
//	printf("%d\n",cl);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

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

int main()
{
	/*int a = 10;
	float b = 0.200000;
	printf("%d\n", b);
	printf("%f\n", a);*/
	/*char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
	printf("%s\n", str);
	int a[3] = { 1, 2, 3 };
	printf("%d\n", a + 1);*/

	/*int a = 1;
	int b = 0;
	b = a++;
	printf("%d\n", b);*/

	/*int a = 010;
	printf("%d\n", a);*/

	/*int *p = NULL;
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(*p));
	int a[100];
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[100]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a[0]));

	int b[100];
	void fun(int b[100])
	{
		printf("%d\n", sizeof(b));
	}*/

	


	system("pause");
	return 0;
}


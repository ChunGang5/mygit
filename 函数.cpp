#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<memory.h>
#include<Windows.h>

//int main()
//{
//	char array1[] = "fjiajfioajfijaijajfajfiajifjai";
//	char arr2[] = { 'a', 'b', 'v', '\0'};
//	strcpy(array1, arr2);
//	printf("%s\n", array1);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr2[] = "LKV are beautiful";
//	char arr1[] = "";
//	
//	printf("%s\n", arr2);
//	memset(arr2,97, 3);
//	printf("%s\n", arr2);
//	system("pause");
//	return 0;
//}

//void Swap1(int x, int y)		//传值调用，错误
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//void Swap2(int *px, int *py)		//传址调用
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b = %d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d,b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}

//int is_prime(int n)		//判断素数
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//		else
//			return 1;
//	}
//}
//int main()
//{
//	int i;
//	for (i = 0; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int is_leap_year(int year)		//判断闰年
//{
//	if ((year % 4 == 0 && year % 100 != 0) ||(year%400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d 是闰年\n", i);
//			Sleep(1000);
//		}
//	}
//	system("pause");
//	return 0;
//}


//每调用一次函数，计数一次
//void faction(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	//调用函数，使得num每次增加1
//	faction(&num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
 


//函数的嵌套访问
//void print()
//{
//	printf("吕凯纯是臭傻逼！\n");
//}
//
//void transturn()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		print();
//	}
//}
//int main()
//{
//	transturn();
//	system("pause");
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	else
//	{
//		printf("%d\n", n%10);
//	}
//
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}

//递归求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int len = my_strlen("abcde");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//斐波那契数列的递归做法
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//迭代做法
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		while (n-2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//	
//
//}
//
//int main()
//{
//	int n = 6;
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}
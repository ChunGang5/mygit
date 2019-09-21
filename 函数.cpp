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
 
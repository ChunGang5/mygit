#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define MAXSIZE 1024
//typedef int elemtype;
//typedef struct SequenQueue
//{
//
//};


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[4] = { 15, 25, 30, 35 };
	int arr3[10] = {0};
	int i = 0;
	int k = 0;
	int g = 0;
	int j = 0;
	i = sizeof(arr1[5] / arr1[0]);
	j=sizeof(arr2[4] / arr2[0]);
	for (k = 0; k < i; k++)
	{
		arr3[k] = arr1[k];

	}
	for (g = 0; g < j; j++)
	{
		arr3[i + j] = arr2[j];
	}
	for (j = 0; j < 9; j++)
	{
		printf("%d ", arr3[j]);
	}
	
	system("pause");
	return 0;
}


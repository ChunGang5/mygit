#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int arr[],int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d	", arr[i]);
	}
	printf("\n");
	system("pause");
}

void bubble_sort(int array[], int sz)
{
	int i;
	int j;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; i < sz - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
			
		}
		if (flag == 0)
			break;
	}
}

int main()
{
	///*int a = 10;
	//int array1[a];*/	//数组的【】内只能给常量
	//
	//int array1[10] = { 0 };
	//int sz = 0;
	//sz = array1[10] / array1[0];

	//int i;
	//for (i = 0; i < sz; i++)
	//{
	//	array1[i] = i;
	//}
	//for (i = 0; i < sz; ++i)
	//{
	//	printf("%d\n", array1[i]);
	//}

	/*int arr[3][3] = { 2, 5, 8 ,9 ,10};*/
	int array[10] = { 0, 13, 2, 3, 75, 5, 6, 7, 8, 9 };
	int sz = sizeof(array) / sizeof(array[0]);
	print(array, sz);
	bubble_sort(array, sz);
	print(array, sz);
	system("pause");
	return 0;
}
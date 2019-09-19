#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int binary_search(int array[], int left, int right, int key, int mid)
//{
//	while (left <= right)
//	{
//		mid = left+(right-left) / 2;
//		if (array[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (array[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int array[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(array) / sizeof(array[0]) - 1;
//	int mid = 0;
//	int key = 5;
//	int ret = binary_search(array,left,right,key,mid );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d\n", binary_search);
//	}
	
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (array[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (array[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			break;
//		
//	}
//	if (left <= right)
//	{
//		printf("%d\n", mid);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//算1！+2！+。。。+n！
//	int i = 1;
//	int j = 1;
//	int n = 5;
//	int sum = 0;
//	
//	for (j = 1; j <= 3; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//void menu()
//{
//	printf("*********************\n");
//	printf("******1. paly   *****\n");
//	printf("******0. exit   *****\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//
//	int random_num = rand() % 100 + 1;	//将数字值固定于区间1--100
//	int input;
//	while (1)
//	{
//		printf("请猜一个0-100的数字\n");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));	//定位时间？
//
//	do{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//			break;
//		}
//	} while(input);	//如果是0，直接结束了
//	system("pause");
//	return 0;
//}

int main()
{
chengang:
	printf("分手在起风这个季节\n");
	goto chengang;
	return 0;
}
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
//		printf("�Ҳ���\n");
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
//	//��1��+2��+������+n��
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
//	int random_num = rand() % 100 + 1;	//������ֵ�̶�������1--100
//	int input;
//	while (1)
//	{
//		printf("���һ��0-100������\n");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));	//��λʱ�䣿
//
//	do{
//		menu();
//		printf("��ѡ��>:");
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
//			printf("ѡ��������������룡\n");
//			break;
//		}
//	} while(input);	//�����0��ֱ�ӽ�����
//	system("pause");
//	return 0;
//}

int main()
{
chengang:
	printf("����������������\n");
	goto chengang;
	return 0;
}
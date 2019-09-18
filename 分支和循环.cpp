#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{	
//		case 1:
//			m++;
//		case 2:
//			n++;
//			m++;
//			break;
//		}
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	system("pause");
//	return 0;
//}
//int main()
//{
//while ((ch = getchar()) != EOF)
//{
//if (ch < ‘0’ || ch > ‘9’)
//continue;
//putchar(ch);
//}
//return 0;
//}

int main()
{
	//int ch = 0;
	//ch = getchar();
	//putchar(ch);
	//ch = getchar();
	//putchar(ch);
	/*while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	/*int i = 1;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
		
	}*/

	//int x, y;
	//for (x = 0, y = 0; x < 2, y < 5; ++x, ++y)
	//{
	//	printf("吕凯纯是臭猪!\n");
	//}

	
	char array1[] = "You gotta be flexible, prepared to roll with anything.";
	char array2[] = "**************************************************";

	//int left1 = 0;
	//int right1 = sizeof(array1) / sizeof(array1[0])-2;	//求最后一个显示字符的位置应该-2；一是数组下标从0开始，而是字符串最后一个字符是\0;

	//int left2 = 0;
	//int right2 = sizeof(array2) / sizeof(array2[0])-2;
	/*while (left1 < right1)
	{
		Sleep(100);
		array2[left2] =  array1[left1];
		array2[right2] = array1[right1];
		if (left1 == right1){
			break;
		}
			
		left1++;
		left2++;
		right1--;
		right2--;
		printf("%s\n", array2);

	}
*/
	/*int left = 0;
	int right = strlen(array1) - 1;
	for (left = 0, right=strlen(array1)-1; left <= right; left++, right--)
	{
		Sleep(100);
		array2[left] = array1[left];
		array2[right] = array1[right];
		printf("%s\n", array2);
		system("cls");		清空屏幕
	}*/

	/*char pas[] = "";
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", pas);

		if (strcmp(pas, "123456")==0)
		{
			printf("恭喜\n");
			break;
		}


	}
	if (i == 3)
	{
		printf("shibai\n");
	}
	
*/

	/*int i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 10);*/		//不常用
	 


	system("pause");
	
	return 0;
}

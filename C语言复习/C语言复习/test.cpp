#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <Windows.h>
#include <assert.h>

//ģ��ʵ��strlen()
//����һ
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str++!='\0')
//	{
//		count++;
//	}
//	return count;
//}

//ָ��-ָ��
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
////��������
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

//ģ��ʵ��strstr()����
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

//��������ַ���
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
//	*pc = 0x55;//�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
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
/*ʵ���Զ��my_strlen()����*/
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;	//ָ���ָ�������ָ��֮��Ԫ�صĸ���
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
//	printf("%d\n", **arr);		//��������������Ԫ�ص�ַ��*arr = &a;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	/*int *p;
//	*p = NULL;*/	//û�и�p�洢��λ�÷ŵ�ַ�����׵����ڴ���ʳ���*p�����Ͳ�֪����������Ǹ�NULL
//	/*int i = 10;
//	int * p = &i;
//	*p = NULL;*/
//
//	char *p = "abcdef";
//	char a[] = "123456";
//	printf("%c\n", *(p + 4));
//	printf("%c\n", p[4]);	//�����±�ķ�����ʽ��ʵ����������ָ��ķ�����ʽ��Ϊʲô��������ʾ������Ԫ�ص�ַ
//							//�������ڴ��������洢����ԭ����һ��������Ǵ���Ԫ�ص�ַ��ʼ��ָ��+��������ʽ���ʵ�
//							//��ôָ��Ҳ���������ַ�ʽ�����з��ʣ����鱾��û�е�ַ
//	printf("%c\n", *(a + 2));
//	printf("%c\n", a[2]);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int a[5] = { 1, 2, 3, 4, 5 };
//	//int *ptr = (int *)(&a + 1);		//������ƫ����*���͵���ʽƫ��
//	//printf("%d %d\n", *(a + 1), *(ptr - 1));
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[5] = &a;
//	char(*p4)[5] = a;	//�����������Ͳ�һ�£���߶������ָ�����������ָ�룻���ұ߸����ĵ�ַȷʵ������Ԫ���±�ĵ�ַ
//						//�޷�����ͨ��
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
//	fun(p);	//���ܰ�ָ��������ݸ�һ������ ����ȥ��ֻ��һ����ʱ����,c��p�ĵ�ַ���Զ
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
//		printf("��ѡ��\n");
//		scanf("%d", &select);
//		if (select >= 1 && select <= 4)
//		{
//			printf("��������Ҫ���������\n");
//			scanf("%d%d", &x, &y);	//�ش���һ��scanf֮��ͺ��ˣ���֪��Ϊʲô��
//			ret = (*(p[select-1]))(x, y);
//			
//		}
//		else
//		{
//			printf("����������\n");
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
//	return (*(char*)&i);	//��i�ĵ�ַǿתΪchar*(�͵���ȡ��i�ĵ�һ���ֽڵĵ�ַ)��Ȼ������ã������С��=1��0x01 000000�����0��0x00 000001
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	if (ret == 0)
//	{
//		printf("���\n");
//	}
//	system("pause");
//}

//���������壨union��ֻ��ͬһ���ڴ���ı䣬�޸�һ����Ա��Ӱ���������г�Ա���������С��
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
//		printf("С��\n");
//	}
//	if (un.c == 0)
//	{
//		printf("���\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "abc";
//	if (strlen(str2) - strlen(str1) > 0)	//��Ϊstrlen()�����ķ���ֵ��size_t,���޷��ŵ����ͣ����Դ�������Զ����
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

//qsort		�ص�����
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

//ð������-����
//int main()
//{
//	int arr[5] = { 3, 5, 10, 8, 9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int tep = 0;
//	for (i = 0; i < num - 1 ; i++)	//5����ֻ�ܱȽ��Ĵ�
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

/*һ�������ڳ���������ͬ���������������ǳɶԳ��ֵģ��ҳ��������������������
void FindTwoDiff(int arr[], int num, int *px, int *py)
{
	int temp = arr[0];
	int i = 0;
	for (i = 1; i < num; i++)	//�Ƚ������ڵ�����ȫ����򣬵õ�һ���϶�����0����
	{
		temp ^= arr[i];
	}
	int pos = 0;
	while (temp)
	{
		if (((temp >> pos) & 1))	//�ҳ����ĵ����Ǹ��������λ���һ����Ϊ0��λ
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
			//���ڱ�������ֻʣ�������ˣ��ҳ�posλ��1����
			*px ^= arr[i];
		}
		else
		{
			//�ҳ�posλΪ0����
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
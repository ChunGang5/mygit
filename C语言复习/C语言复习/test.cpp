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


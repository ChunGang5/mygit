#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int Add(int x, int y)
{
	return x + y;
	}
int main()
{
	
    printf("Hello world!\n");
	printf("%d\n", sizeof(char));  #1
	printf("%d\n", sizeof(int));	4
	printf("%d\n", sizeof(long));	4
	printf("%d\n", sizeof(short));	2
	printf("%d\n", sizeof(long long));	8
	printf("%d\n", sizeof(float));	4
	printf("%d\n", sizeof(double));8
	printf("%d\n", sizeof(long double));	8
	printf("%d\n", sizeof(signed char));	1
	printf("%d\n", sizeof(unsigned char));	1
	printf("%d\n", sizeof(short int));	2
	printf("%d\n", sizeof(long int));	4
	const float pia = 3.14f;
	printf("C:\\Code\\test\n");		#转义字符"\"

	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("C:\test\32\test.c"));	//\32被解析为一个转义字符

	
	int a = 20;
	int b = 10;
	int sum = 0;
	sum = Add(a, b);
	printf("%d", sum);

	system("pause");
}
*/

//void test()
//{
//	static int i = 0;	//修饰局部变量的生命周期，使得静态局部变量出了作用域依旧存在，直到程序结束
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
	//printf("%c\n", '\n');	//要看二进制所对应的ASCII值，因为计算机底层跑的都是二进制，不管是什么类型的
	//printf("%d\n", (float)(1.0 / 3));
	//int a = 0;		//00000000000000000000000000000000
	//printf("%d\n", ~a);		//111111111111111111111111  一个数在内存中存的是补码，不管正数还是负数，但是正数的补码就是原码，
	//						//负数的补码是符号位不变，其余取反加1；
	/*int a = 1;
	float b = 3;
	printf("%d", a / b);*/
	/*for (int i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");*/
//}

//static int g_val = 2018;
//
//int main()
//{
//	
//	printf("%d\n", g_val);
//	
//
//	system("pause");
//	return 0;
//}


//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}

//extern int Add(int x, int y);	//声明引用其他源文件里的东西
//
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	system("pause");
//}

//#define MAX 100
//int Add(int x, int y)
//{
//	return (x + y);
//}

//#define ADD(x, y) ((x) + (y))	//宏定义时候函数名要全部大写，并且后面的操作表达式的括号一定要完整，防止出纰漏
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int sum = 10 * ADD(a, b);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;		//整型指针变量 p，存储a的地址
//	*p = 20;	//解引用操作
//	printf("%d\n", *p);
//	system("pause");
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double *));
//	system("pause");
//	return 0;	//都是4字节
//}

typedef struct Student
{
	char name[20];
	int gae;
	char sex[10];
	char studentID[10];
}Stu;	//重定向变量名

int main()
{

	Stu stu1 = { "chengang", 21, "nan", "1531351" };
	printf("%s, %d, %s, %s", stu1.name, stu1.gae, stu1.sex, stu1.studentID);
	system("pause");
}
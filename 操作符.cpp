#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	/*int a = 5.5;
//	int b = 2;
//	int c = 3;
//	int d;
//	d = a % b;	*/	//ȡģ��������������������������
//
//	int a = 5;
//	int b = 5;
//	/*b = a << 1;*/
//	int c;
//	c = a^b;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int count=0;
//	while (a)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

int main()
{
	char a = 3;		//00000011	
	char b = 127;	//01111111
	char c = a + b;		//���ʱCPU���������������һ����int����  ����Ҫ��ת��Ϊint����
						//a:00000000000000000000000000000011
						//b:00000000000000000000000001111111
						//c:00000000000000000000000010000010��Ϊ��char����  ����c��10000010
	printf("%d", c);	//�������%d��������������λ��11111111111111111111111110000010
						//�ó�ԭ��-1ȡ����10000000000000000000000001111110=-126
	system("pause");
	return 0;
}
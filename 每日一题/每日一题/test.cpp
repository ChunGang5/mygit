/*���ӣ�https://www.nowcoder.com/questionTerminal/784efd40ed8e465a84821c8f3970b7b5?f=discussion
��Դ��ţ����

[�����]�ַ�����
�ȶ�ָ����37389ʱ�����ƣ�C / C++ 1�룬��������2��ռ����ƣ�C / C++ 32M����������64M
�㷨֪ʶ��Ƶ����
����һ���ַ�����������ַ����������ַ�����

�������� :
ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��


������� :
ÿ������һ�У����ַ���ԭ�е��ַ�˳������ַ����ϣ����ظ����ֲ��������ĸ�������
ʾ��1
����
abcqweracb
���
abcqwer
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		char arr[123] = { 0 };
		int length = str.length();
		int i = 0;
		for (i = 0; i<length; i++)
		{
			arr[str[i]] = 1;
		}
		for (i = 0; i<length; i++)
		{
			if (arr[str[i]] == 1)
			{
				cout << str[i];
				arr[str[i]] = 0;
			}
		}
		cout << endl;
	}

	return 0;
}
*/
/*���ӣ�https://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471?orderByHotValue=1&page=1&onlyReference=false
��Դ��ţ����

ţţ��������������Ϊһ��������һ��������������,��������������Ƿǵ������߷ǵݼ�����ġ�ţţ��һ������Ϊn����������A,��������һ�������ǰ�����A��Ϊ���ɶ�����������,ţţ��֪�������ٿ��԰���������Ϊ��������������.
��������ʾ,ţţ���԰�����A����Ϊ[1,2,3]��[2,2,1]��������������,������Ҫ����Ϊ2������������,�������2

��������:
����ĵ�һ��Ϊһ��������n(1 �� n �� 10^5)

�ڶ��а���n������A_i(1 �� A_i �� 10^9),��ʾ����A��ÿ�����֡�


�������:
���һ��������ʾţţ���Խ�A���ٻ���Ϊ���ٶ�����������
ʾ��1
����
6
1 2 3 2 2 1
���
2
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int result = 1;	//����������д����м���Ԫ�أ���������һ��������
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || a[i] < a[i - 1] && a[i] < a[i + 1])
		{
			result++;

			if (i != n - 1 - 2)		//��һ�����Ƿ�ֹ��Խ�磬��Ϊ����i+1�ıȽ��أ�
			{
				i++;	
			}
		}
	}
	printf("%d\n", result);
}
*/
/*��Ŀ����
����һ���ַ���str������ַ���str�е�����������ִ�
��������:
�������������1������������һ���ַ���str�����Ȳ�����255��
�������:
��һ�������str��������������ִ���
ʾ��1
����
����
abcd12345ed125ss123456789
���
����
123456789
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[255] = { 0 };
	char len[255] = { 0 };	//������������ע�ҵ��������ִ��ĵ�һ���±�
	scanf("%s", arr);
	int i, sum, k;
	for (i = 0; i<strlen(arr); i++)
	{
		sum = 0;
		k = i;
		while (arr[i] >= '0'&&arr[i] <= '9')
		{
			i++;
			sum++;
		}
		len[k] = sum;	//��ע���λ���ҵ������ִ��ĵ�һ��λ�ã������汾���ַ����ĳ���
	}
	int max = 0;
	int key = 0;
	for (i = 0; i<strlen(arr); i++)
	{
		if (max < len[i])	//��len�������ҵ��ַ�����������һ�����ִ�
		{
			max = len[i];	
			key = i;	//��¼�ҵ���Ŀǰ��˵���ִ��������ĵ���ʼ�±�
		}
	}
	for (i = 0; i<max; i++)
	{
		printf("%c", arr[key++]);	//��ӡ���Ŀ�����ִ�
	}
	printf("\0");
}*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stdlib.h>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int sum = 0;
//	vector<int> num(n);
//	for (int i = 0; i < num.size(); i++)
//	{
//		cin >> num[i];
//	}
//
//	for (int i = 0; i < num.size(); i++)
//	{
//		if (num[i] > 0)
//		{
//			sum += num[i];
//		}
//	}
//	sort(num.begin(), num.end());
//	if (sum == 0)
//	{
//		sum = num[num.size() - 1];
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//
//}
/*
���ӣ�https://www.nowcoder.com/questionTerminal/5a304c109a544aef9b583dce23f5f5db?f=discussion
��Դ��ţ����

һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1, 2, 1]������������������Ϊ[2, 1]�����Ϊ 3

�������� :
	 ����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn��������ÿ��Ԫ��, ÿ����������32λint��Χ�ڡ��Կո�ָ���


 ������� :
���������������к�����ֵ��
ʾ��1
����
3 - 1 2 1
���
3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < num.size(); i++)
	{
		cin >> num[i];
	}
	int result = num[0];
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < num.size(); i++)
	{
		sum2 = sum1 >= 0 ? sum1 + num[i] : num[i];
		if (sum2 > result)
		{
			result = sum2;
		}
		if (sum2 < 0)
		{
			sum2 = 0;
		}
		sum1 = sum2;
	}
	cout << result << endl;
	return 0;

}*/
/*
���ӣ�https://www.nowcoder.com/questionTerminal/003482c395bd41c68082f6adc545a600?orderByHotValue=1&page=1&onlyReference=false
��Դ��ţ����

����һ���ַ�������������Ǽ�������ַ������ж��ٸ������Ӵ���
("���Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ���)
���в�ͬ��ʼλ�û����λ�õ��Ӵ�����ʹ������ͬ���ַ���ɣ�Ҳ�ᱻ��Ϊ�ǲ�ͬ���Ӵ���
����C++, Java, C#ʵ����ش����߼�

�������� :
����һ���ַ���S ���硰aabcb��(1 <= | S | <= 50), | S | ��ʾ�ַ���S�ĳ��ȡ�


������� :
�����������ַ�����"a", "a", "aa", "b", "c", "b", "bcb"

���Դ� : 7
	   ʾ��1
	   ����
	   aabcb
	   ���
	   7

	   */


/*
��Ŀ����
��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�



/**
* ͳ�Ƴ�����������
*
* @param monthCount �ڼ�����
* @return ��������

public static int getTotalCount(int monthCount)
{
	return 0;
}





��������:
����int�ͱ�ʾmonth

������� :
�����������int��

ʾ��1
����
����
9
���
����
34
#include <stdio.h>
int main()
{
	int month = 0;
	int i = 0;
	while (scanf("%d", &month) != EOF)
	{
		int num1 = 1;
		int num2 = 1;
		int temp;
		for (i = 3; i <= month; ++i)
		{
			temp = num1 + num2;
			num1 = num2;
			num2 = temp;
		}
		printf("%d\n", temp);
	}
	return 0;
}
*/
/*链接：https://www.nowcoder.com/questionTerminal/784efd40ed8e465a84821c8f3970b7b5?f=discussion
来源：牛客网

[编程题]字符集合
热度指数：37389时间限制：C / C++ 1秒，其他语言2秒空间限制：C / C++ 32M，其他语言64M
算法知识视频讲解
输入一个字符串，求出该字符串包含的字符集合

输入描述 :
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。


输出描述 :
每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
示例1
输入
abcqweracb
输出
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
/*链接：https://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471?orderByHotValue=1&page=1&onlyReference=false
来源：牛客网

牛牛定义排序子序列为一个数组中一段连续的子序列,并且这段子序列是非递增或者非递减排序的。牛牛有一个长度为n的整数数组A,他现在有一个任务是把数组A分为若干段排序子序列,牛牛想知道他最少可以把这个数组分为几段排序子序列.
如样例所示,牛牛可以把数组A划分为[1,2,3]和[2,2,1]两个排序子序列,至少需要划分为2个排序子序列,所以输出2

输入描述:
输入的第一行为一个正整数n(1 ≤ n ≤ 10^5)

第二行包括n个整数A_i(1 ≤ A_i ≤ 10^9),表示数组A的每个数字。


输出描述:
输出一个整数表示牛牛可以将A最少划分为多少段排序子序列
示例1
输入
6
1 2 3 2 2 1
输出
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
	int result = 1;	//不论这个序列串中有几个元素，它至少有一个子序列
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || a[i] < a[i - 1] && a[i] < a[i + 1])
		{
			result++;

			if (i != n - 1 - 2)		//这一条件是防止其越界，因为还有i+1的比较呢；
			{
				i++;	
			}
		}
	}
	printf("%d\n", result);
}
*/
/*题目描述
读入一个字符串str，输出字符串str中的连续最长的数字串
输入描述:
个测试输入包含1个测试用例，一个字符串str，长度不超过255。
输出描述:
在一行内输出str中里连续最长的数字串。
示例1
输入
复制
abcd12345ed125ss123456789
输出
复制
123456789
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[255] = { 0 };
	char len[255] = { 0 };	//此数组用来标注找到的是数字串的第一个下标
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
		len[k] = sum;	//标注这个位置找到的数字串的第一个位置，并保存本段字符串的长度
	}
	int max = 0;
	int key = 0;
	for (i = 0; i<strlen(arr); i++)
	{
		if (max < len[i])	//在len数组中找到字符串数字最多的一串数字串
		{
			max = len[i];	
			key = i;	//记录找到的目前来说数字串总数最大的的起始下标
		}
	}
	for (i = 0; i<max; i++)
	{
		printf("%c", arr[key++]);	//打印输出目标数字串
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
链接：https://www.nowcoder.com/questionTerminal/5a304c109a544aef9b583dce23f5f5db?f=discussion
来源：牛客网

一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1, 2, 1]，和最大的连续子数组为[2, 1]，其和为 3

输入描述 :
	 输入为两行。 第一行一个整数n(1 <= n <= 100000)，表示一共有n个元素 第二行为n个数，即每个元素, 每个整数都在32位int范围内。以空格分隔。


 输出描述 :
所有连续子数组中和最大的值。
示例1
输入
3 - 1 2 1
输出
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
链接：https://www.nowcoder.com/questionTerminal/003482c395bd41c68082f6adc545a600?orderByHotValue=1&page=1&onlyReference=false
来源：牛客网

给定一个字符串，你的任务是计算这个字符串中有多少个回文子串。
("回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。)
具有不同开始位置或结束位置的子串，即使是由相同的字符组成，也会被计为是不同的子串。
可用C++, Java, C#实现相关代码逻辑

输入描述 :
输入一个字符串S 例如“aabcb”(1 <= | S | <= 50), | S | 表示字符串S的长度。


输出描述 :
符合条件的字符串有"a", "a", "aa", "b", "c", "b", "bcb"

所以答案 : 7
	   示例1
	   输入
	   aabcb
	   输出
	   7

	   */


/*
题目描述
有一只兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，问每个月的兔子总数为多少？



/**
* 统计出兔子总数。
*
* @param monthCount 第几个月
* @return 兔子总数

public static int getTotalCount(int monthCount)
{
	return 0;
}





输入描述:
输入int型表示month

输出描述 :
输出兔子总数int型

示例1
输入
复制
9
输出
复制
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

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
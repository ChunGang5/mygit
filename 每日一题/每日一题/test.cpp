/*查找一个数组的第K小的数，注意同样大小算一样大。 如  2 1 3 4 5 2 第三小数为3。
https ://www.nowcoder.com/questionTerminal/204dfa6fcbc8478f993d23f693189ffd?f=discussion
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, k;
	while (cin >> n){
		int a[1000] = { 0 }, num;//使用位图进行去重
		for (int i = 0; i<n; i++){
			cin >> num;
			a[num] = 1;
		}
		cin >> k;
		vector<int> nums;
		for (int i = 0; i<1000; i++){//按位得到有序的数组
			if (a[i] == 1) nums.push_back(i);
		}
		cout << nums.at(k - 1) << endl;
	}
	return 0;
}
*/
/*题目描述
小易经常沉迷于网络游戏.有一次, 他在玩一个打怪升级的游戏, 他的角色的初始能力值为 a.在接下来的一段时间内, 他将会依次遇见n个怪物, 每个怪物的防御力为b1, b2, b3...bn.如果遇到的怪物防御力bi小于等于小易的当前能力值c, 那么他就能轻松打败怪物, 并 且使得自己的能力值增加bi; 如果bi大于c, 那他也能打败怪物, 但他的能力值只能增加bi 与c的最大公约数.那么问题来了, 在一系列的锻炼后, 小易的最终能力值为多少 ?
输入描述 :
	 对于每组数据, 第一行是两个整数n(1≤n<100000)表示怪物的数量和a表示小易的初始能力值.
	 第二行n个整数, b1, b2...bn(1≤bi≤n)表示每个怪物的防御力
 输出描述 :
对于每组数据, 输出一行.每行仅包含一个整数, 表示小易的最终能力值
示例1
输入
复制
3 50
50 105 200
5 20
30 20 15 40 100
输出
复制
110
205
#include<iostream>
#include<vector>
using namespace std;
int gong_yue_num(int b, int c)
{
	int d = 0;
	while (d = b%c)
	{
		b = c;
		c = d;
	}
	return c;
}
int main()
{
	int n = 0;
	int a = 0;
	vector<int> num;
	while (cin >> n >> a)
	{
		num.resize(n);
		for (int i = 0; i<n; i++)
		{
			cin >> num[i];
		}
		for (int k = 0; k<n; k++)
		{
			if (num[k] <= a)
			{
				a += num[k];
			}
			else
			{
				a += gong_yue_num(num[k], a);
			}
		}
		cout << a << endl;
	}
	return 0;
}*/

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

//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	vector<char> str;
//	int count[256] = { 0 };
//
//	getline(cin, s1);
//	getline(cin, s2);
//	for (int i = 0; i < s2.size(); i++)
//	{
//		count[s2[i]] = 1;
//	}
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (count[s1[i]] == 1)
//		{
//			s1 = s1.erase(i, 1);
//			i = i - 1;
//		}
//	}
//	cout << s1 << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int N = 10;
//int main()
//{
//	vector<int> arr(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[N];
//	}
//
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//		int* num1 = new int[1000];
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			while (num % i == 0)
//			{
//				if (num != 1)
//				{
//					num1[j] = i;
//					j++;
//					num /= i;
//				}
//			}
//		}
//		if (num != 1)
//		{
//			num1[j] = num;
//			j++;
//		}
//		for (int k = 0; k < j; k++)
//		{
//			cout << num1[k];
//			if (k + 1 < j)
//			{
//				cout << " * ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include<string>
//
//using namespace std;
//int main()
//{
//	string s;
//	string t;
//	while (cin>>s)
//	{
//	cin >> t;
//	int count = 0;
//	int start = 0;
//	int j = 0;
//	for (int i = 0; i < s.size(); ++i)
//	{
//		start = i;
//		for (j = 0; j < t.size(); ++j)
//		{
//			if (s[i] == t[j])
//				++i;
//			else
//				break;
//		}
//		if (j == t.size())
//		{
//			++count;
//			i = i - 1;
//		}
//		else
//			i = start;
//	}
//	cout << count << endl;
//	}
//return 0;
//}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> n(100);
//	n = { 1, 2 };
//	for (int i = 2; i < 100; i++)
//	{
//		n[i] = n[i - 1] + n[i - 2];
//	}
//	int day=0;
//	while (cin >> day)
//	{
//		cout << n[day - 1] << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cin.get();
//		string name;
//		for (int i = 0; i<n; i++)
//		{
//			getline(cin, name);
//			if (i != n - 1)
//			{
//				if (name.find(',') != -1 || name.find(' ') != -1)
//				{
//					cout << '\"' << name << '\"' << ',' << ' ';
//				}
//				else
//				{
//					cout << name << ',' << ' ';
//				}
//			}
//			else
//			{
//				if (name.find(',') != -1 || name.find(' ') != -1)
//				{
//					cout << '\"' << name << '\"' << endl;
//				}
//				else
//				{
//					cout << name << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}

//抄送列表
//#include<iostream>
//#include<string>
//#include <algorithm>
//#include<vector>
//using namespace std;
//int main()
//{
//	string line;
//	while (getline(cin, line))
//	{
//		vector<string> names;
//		size_t pos = 0;
//		while (pos<line.length())
//		{
//			if (line[pos] == '\"')
//			{
//				size_t end = line.find('\"',pos+1);
//				names.push_back(line.substr(pos + 1, end - pos - 1));
//				pos = end + 2;
//			}
//			else
//			{
//				size_t end = line.find(',', pos + 1);
//				if (end == -1)
//				{
//					names.push_back(line.substr(pos, line.size() - pos));
//					break;
//
//				}
//				names.push_back(line.substr(pos, end - pos));
//				pos = end + 1;
//			}
//		}
//		getline(cin, line);
//		if (names.end() == find(names.begin(), names.end(), line))
//		{
//			cout << "Important!" << endl;
//		}
//		else
//		{
//			cout << "Ignore" << endl;
//		}
//	}
//	return 0;
//}


//错排算法
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	long long n[20] = { 0, 0, 1 };
//	long long k[20] = { 0, 1, 2 };
//	for (int i = 3; i<20; i++)
//	{
//		n[i] = (i - 1)*(n[i - 1] + n[i - 2]);
//		k[i] = i*k[i - 1];
//	}
//	int j = 0;
//	while (cin >> j)
//	{
//		printf("%0.2f%c\n", 1.0*n[j] / k[j] * 100, '%');
//	}
//	return 0;
//}


//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	string t;
//	while (cin >> s)
//	{
//		cin >> t;
//		int count = 0;
//		int start = 0;
//		int j = 0;
//		for (int i = 0; i < s.size(); ++i)
//		{
//			start = i;
//			for (j = 0; j < t.size(); ++j)
//			{
//				if (s[i] == t[j])
//					++i;
//				else
//					break;
//			}
//			if (j == t.size())
//			{
//				++count;
//				i = i - 1;
//			}
//			else
//				i = start;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cin.get();
//		while (n--)
//		{
//			string names;
//			getline(cin, names);
//			if (names.find(',') != -1 || names.find(' ') != -1)
//			{
//				names.insert(names.begin(), '"');
//				names.insert(names.end(), '"');
//			}
//			if (n == 0)
//				cout << names << endl;
//			else
//				cout << names << ", ";
//		}
//	}
//	cin.get();
//	return 0;
//}

//求最长公共子序列,动态规划
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		int len1 = s1.length();
//		int len2 = s2.length();
//		vector<vector<int>> dp(len1, vector<int>(len2, 0));
//		dp[0][0] = (s1[0] == s2[0]) ? 1 : 0;
//		for (int i = 1; i < len1; i++)
//		{
//			dp[i][0] = (s1[i] == s2[0]) ? 1 : 0;
//			dp[i][0] = max(dp[i - 1][0], dp[i][0]);
//		}
//		for (int j = 1; j < len1; j++)
//		{
//			dp[0][j] = (s1[0] == s2[j]) ? 1 : 0;
//			dp[0][j] = max(dp[0][j - 1], dp[0][j]);
//		}
//		for (int i = 1; i < len1; i++)
//		{
//			for (int j = 1; j < len2; j++)
//			{
//				if (s1[i] == s2[j])
//				{
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				}
//				else
//				{
//					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//				}
//			}
//		}
//		cout << dp[len1 - 1][len2 - 1] << endl;
//	}
//	return 0;
//}

//最长上升子序列
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> num(n, 0);
//		for (int i = 0; i<n; i++)
//		{
//			cin >> num[i];
//		}
//		vector<int> Max_Num(n, 1);
//		int count = 1;
//		for (int i = 1; i<n; i++)    //划分问题为子问题
//		{
//			for (int j = 0; j<i; j++)    //判断i位置的数字比之前的都大；
//			{
//				if (num[i]>num[j])
//				{
//					Max_Num[i] = max(Max_Num[i], Max_Num[j] + 1);
//				}
//			}
//			count = max(count, Max_Num[i]);
//		}
//		cout << Max_Num[n - 1] << endl;
//		cout << count << endl;
//	}
//	return 0;
//}

//链接：https://www.nowcoder.com/questionTerminal/1a92fbc771a54feb9eb5bd9b3ff2d0a9
//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		getchar();
//		stack<int> st;
//		for (size_t i = 0; i<n; i++)
//		{
//			int sum = 0;
//			string ch;//运用string而不是用char的原因是，char只能存10以下的字符，当输入的字符
//			//大于10，就会出现错误
//			cin >> ch;
//			if (ch[0] == '+' || ch[0] == '-' || ch[0] == '*' || ch[0] == '/')
//				int right = st.top();//栈结构，自底向上，所以取值时，需要先取右操作数
//				st.pop();
//				int left = st.pop;
//				st.pop();
//				if (ch[0] == '+')
//					sum = left + right;
//				if (ch[0] == '-')
//					sum = left - right;
//				if (ch[0] == '*')
//					sum = left*right;
//				if (ch[0] == '/')
//				{
//					if (right != 0)
//						sum = left / right;
//					else
//						return 0;
//				}
//				st.push(sum);
//			}
//			else
//				st.push(atoi(ch.c_str()));
//		}
//		cout << (int)st.top() << endl;
//	}
//	cin.get();
//	return 0;
//}


////背包问题
//#include <iostream>
//#include <vector>
//using namespace std;
// 
////这道题是一个典型的背包问题
////通过搜索，分为两种情况：选择、不选择
////如果选择当前值，那么背包空间和val都需要加到背包
////如果不选择，那么背包就是上一次的
////
////递归退出条件：m = 0，表示当前背包里面恰好就是结果，需要打印
////m<0，表示当前背包已经不足，所以背包里面数字并不满足要求
////start > n表示一轮遍历完毕
//void GetFunc(int start,int n,int m,vector<int> v)
//{
//    //n:从1到n个数字
//    //m:表示背包空间
//    if(m == 0)
//    {
//        for(int i =0;i<v.size();++i)
//            i == 0 ? cout<<v[i]:cout<<" "<<v[i];
//        cout<<endl;
//        return;
//    }
// 
//    if(m < 0 || start>n)
//        return;
// 
//    //要
//    v.push_back(start);
//    GetFunc(start+1,n,m-start,v);
// 
//    //不要
//    v.pop_back();
//    GetFunc(start+1,n,m,v);
//}
// 
//int main()
//{
//    int n,m;
//    while(cin>>n>>m)
//    {
//        vector<int> v;
//        int start = 1;
//        GetFunc(start,n,m,v);
//    }
//    return 0;
//}

//二维数组找数字
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		int rowCount = array.size();
//		int colCount = array[0].size();
//		int row = 0;
//		int col = colCount - 1;
//		bool flase = false;
//		if (rowCount>0 && colCount>0)
//		{
//			while (row<rowCount && col >= 0)
//			{
//				if (target == array[row][col])
//				{
//					flase = true;
//					break;
//				}
//				else if (target < array[row][col])
//				{
//					--col;
//				}
//				else
//					++row;
//			}
//		}
//		return flase;
//	}
//};

//从左下角开始查找
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		int rowCount = array.size();
//		int colCount = array[0].size();
//		int row = 0;
//		int col = colCount - 1;
//		bool found = false;
//		if (rowCount>0 && colCount>0)
//		{
//			while (row<rowCount && col >= 0)
//			{
//				if (target == array[row][col])
//				{
//					found = true;
//					break;
//				}
//				else if (target < array[row][col])
//				{
//					--col;
//				}
//				else
//					++row;
//			}
//		}
//		return found;
//	}
//};
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<vector<int>> array(5,vector<int>(8));
//	int rows = array.size();
//	int cols = array[0].size();
//
//	cout << rows << endl;
//	cout << cols << endl;
//	cin.get();
//	return 0;
//
//}


#include<iostream>
#include<string>
#include<vector>
#include<minmax.h>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int freq[256] = { 0 };
		int l = 0, r = -1; //滑动窗口为s[l...r]
		int res = 0;
		// 整个循环从 l == 0; r == -1 这个空窗口开始
		// 到l == s.size(); r == s.size()-1 这个空窗口截止
		// 在每次循环里逐渐改变窗口, 维护freq, 并记录当前窗口中是否找到了一个新的最优值
		while (l < s.size()){
			if (r + 1 < s.size() && freq[s[r + 1]] == 0){
				r++;
				freq[s[r]]++;
			}
			else {   //r已经到头 || freq[s[r+1]] == 1
				freq[s[l]]--;
				l++;
			}
			res = max(res, r - l + 1);
		}
		return res;
	}
};

int main()
{
	string s = "abcabcbb";
	Solution S;
	S.lengthOfLongestSubstring(s);
	cin.get();
	return 0;

}
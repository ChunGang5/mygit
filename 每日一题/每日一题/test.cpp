/*����һ������ĵ�KС������ע��ͬ����С��һ���� ��  2 1 3 4 5 2 ����С��Ϊ3��
https ://www.nowcoder.com/questionTerminal/204dfa6fcbc8478f993d23f693189ffd?f=discussion
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, k;
	while (cin >> n){
		int a[1000] = { 0 }, num;//ʹ��λͼ����ȥ��
		for (int i = 0; i<n; i++){
			cin >> num;
			a[num] = 1;
		}
		cin >> k;
		vector<int> nums;
		for (int i = 0; i<1000; i++){//��λ�õ����������
			if (a[i] == 1) nums.push_back(i);
		}
		cout << nums.at(k - 1) << endl;
	}
	return 0;
}
*/
/*��Ŀ����
С�׾���������������Ϸ.��һ��, ������һ�������������Ϸ, ���Ľ�ɫ�ĳ�ʼ����ֵΪ a.�ڽ�������һ��ʱ����, ��������������n������, ÿ������ķ�����Ϊb1, b2, b3...bn.��������Ĺ��������biС�ڵ���С�׵ĵ�ǰ����ֵc, ��ô���������ɴ�ܹ���, �� ��ʹ���Լ�������ֵ����bi; ���bi����c, ����Ҳ�ܴ�ܹ���, ����������ֵֻ������bi ��c�����Լ��.��ô��������, ��һϵ�еĶ�����, С�׵���������ֵΪ���� ?
�������� :
	 ����ÿ������, ��һ������������n(1��n<100000)��ʾ�����������a��ʾС�׵ĳ�ʼ����ֵ.
	 �ڶ���n������, b1, b2...bn(1��bi��n)��ʾÿ������ķ�����
 ������� :
����ÿ������, ���һ��.ÿ�н�����һ������, ��ʾС�׵���������ֵ
ʾ��1
����
����
3 50
50 105 200
5 20
30 20 15 40 100
���
����
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

//�����б�
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


//�����㷨
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
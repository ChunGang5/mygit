//#define _CRT_SECURE_NO_WARNINGS 1
////给出n阶方阵里所求数，求出n阶方阵里的和
////#include <stdio.h>
//
//
//#if 0
//int main(){
//	int n, ans = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			int x;
//			scanf("%d", &x);
//			ans += x;
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}
//#endif
//
//
//
//
//
//#if 0
	#include<iostream>
	#include<string>
	using namespace std;
	void deleteGivenWord(char str1[], char str2[]);
	int main()
	{
		char str1[256], str2[256];
		memset(str1, 0, sizeof(str1));
		memset(str2, 0, sizeof(str2));
		cin.getline(str1, sizeof(str1));
		cin.getline(str2, sizeof(str2));
		deleteGivenWord(str1, str2);
		cout << str1 << endl;
		system("pause");
	}

	void deleteGivenWord(char str1[], char str2[])
	{
		int hashTable[256];
		memset(hashTable, 0, sizeof(hashTable));
		int str2_len = strlen(str2);
		int str1_len = strlen(str1);
		for (int i = 0; i < str2_len; i++)
		{
			hashTable[str2[i]] = 1;

		}
		int loc = 0;
		for (int i = 0; i < str1_len; i++)
		{
			if (hashTable[str1[i]] != 1)
			{
				str1[loc++] = str1[i];
			}
		}
		str1[loc] = 0;

	}
//#endif
//
//

#if 0

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int	main()
{
	int n = 0;
	cin >> n;
	vector<long> v(3 * n);
	for (int i = 0; i < 3 * n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = n; i < 3 * n; i += 2)
	{
		sum += v[i];
	}
	cout << sum << endl;
	return 0;

}
#endif
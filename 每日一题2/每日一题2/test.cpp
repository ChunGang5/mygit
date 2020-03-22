//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		vector<string> str;
//		string temp;
//		for (int i = 0; i<s.size(); i++)
//		{
//			if (s[i] >= 'A'&&s[i] <= 'Z' || s[i] >= 'a'&&s[i] <= 'z')
//			{
//				temp += s[i];
//			}
//			else
//			{
//				if (temp.size()>0)
//				{
//					str.push_back(temp);
//					temp.clear();
//				}
//			}
//		}
//		if (temp.size() > 0)
//		{
//			str.push_back(temp);
//		}
//		
//		for (int i = str.size() - 1; i >= 0; --i)
//		{
//			cout << str[i] << ' ';
//		}
//		cout << endl;
//	}
//	cin.get();
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		map<char, int> A, B;
//		for (int i = 0; i<s1.size(); i++)
//		{
//			A[s1[i]]++;
//		}
//		for (int i = 0; i<s2.size(); i++)
//		{
//			B[s2[i]]++;
//		}
//		for (int i = 'A'; i <= 'Z'; i++)
//		{
//			if (B[i]>A[i])
//			{
//				cout << "No" << endl;
//				break;
//			}
//			if (i == 'Z')
//			{
//				cout << "Yes" << endl;
//			}
//		}
//	}
//	return 0;
//}

//链接：https://www.nowcoder.com/questionTerminal/661c49118ca241909add3a11c96408c8
//来源：牛客网

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		vector<int> a(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int k, d;
		cin >> k >> d;
		vector<vector<long long>> dp_max(n, vector<long long>(k + 1, 0));
		vector<vector<long long>> dp_min(n, vector<long long>(k + 1, 0));
		for (int i = 0; i < n; i++){
			dp_max[i][1] = a[i];
			dp_min[i][1] = a[i];
		}
		for (int i = 0; i < n; i++){
			for (int j = 2; j <= k; j++){
				for (int m = max(0, i - d); m <= i - 1; m++){
					dp_max[i][j] = max(dp_max[i][j], max(dp_max[m][j - 1] * a[i], dp_min[m][j - 1] * a[i]));
					dp_min[i][j] = min(dp_min[i][j], min(dp_min[m][j - 1] * a[i], dp_max[m][j - 1] * a[i]));
				}
			}
		}
		long long max_value = dp_max[k - 1][k];
		for (int i = k; i < n; i++){
			max_value = max(max_value, dp_max[i][k]);
		}
		cout << max_value << endl;
	}
	return 0;
}

链接：https://www.nowcoder.com/questionTerminal/661c49118ca241909add3a11c96408c8
来源：牛客网

#include <iostream>
#include <string>
#include <vector>
#include <limits.h>         

using namespace std;

long long NK_zheng[51][11];
long long NK_fu[51][11];

int main() {

	int N;
	cin >> N;

	vector<int> V(N + 1);
	for (int i = 1; i <= N; i++) {
		cin >> V[i];
	}

	int K, D;
	cin >> K >> D;

	for (int n = 1; n <= 50; n++) {
		for (int k = 1; k <= 10; k++) {
			NK_zheng[n][k] = LLONG_MIN;    
			NK_fu[n][k] = LLONG_MAX;
		}
	}

	for (int n = 1; n <= N; n++) {
		if (V[n] >= 0)
			NK_zheng[n][1] = V[n];
		else
			NK_fu[n][1] = V[n];
	}

	for (int n = 2; n <= N; n++) {
		for (int k = 2; k <= K && k <= n; k++) {
			long long max = LLONG_MIN, min = LLONG_MAX;
			for (int temp = (k - 1 > n - D) ? (k - 1) : (n - D); temp <= n - 1; temp++) {   
				if (max < NK_zheng[temp][k - 1])
					max = NK_zheng[temp][k - 1];
				if (min > NK_fu[temp][k - 1])
					min = NK_fu[temp][k - 1];
			}
			if (max != LLONG_MIN) {
				if (V[n] >= 0)
					NK_zheng[n][k] = max * V[n];
				else
					NK_fu[n][k] = max * V[n];
			}
			if (min != LLONG_MAX) {
				if (V[n] < 0 && NK_zheng[n][k] < min * V[n])
					NK_zheng[n][k] = min * V[n];
				else if (NK_fu[n][k] > min * V[n])
					NK_fu[n][k] = min * V[n];
			}
		}
	}
	long long max1 = LLONG_MIN, max2 = LLONG_MIN;
	for (int n = K; n <= N; n++) {
		if (max1 < NK_zheng[n][K])
			max1 = NK_zheng[n][K];
		if (max2 < NK_fu[n][K] && NK_fu[n][K] != LLONG_MAX)
			max2 = NK_fu[n][K];
	}

	max1 = max1 > max2 ? max1 : max2;

	cout << max1 << endl;
}

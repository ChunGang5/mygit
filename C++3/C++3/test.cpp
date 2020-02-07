#include<iostream>
#include<climits>
using namespace std;

//int main()
//{
//	int n_int = INT_MAX;
//	short n_short = SHRT_MAX;
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//
//	cout << "int is " << sizeof(int) << " bytes." << endl;
//	cout << "short is " << sizeof n_short << " bytes." << endl;
//	cout << "long is " << sizeof n_long << " bytes." << endl;
//	cout << "long long is " << sizeof n_llong << " bytes." << endl;
//
//	cout << n_int << endl;
//	cout << n_short << endl;
//	cout << n_long << endl;
//	cout << n_llong << endl;
//	cout << INT_MIN << endl;
//	cout << CHAR_BIT << endl;
//	cin.get();
//	return 0;
//}

//#define ZERO 0
//
//int main()
//{
//	short sam = SHRT_MAX;
//	unsigned short sue = sam;
//	cout << "Sam has " << sam << "dollars and Sue has " << sue;
//	cout << "dollars deposited." << endl;
//	cout << "Add $1 to each account." << endl << "Now";
//	sam = sam + 1;
//	sue = sue + 1;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue << "dollars deposited.\nPoor Sam" << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	int cheat = 42;
//	cout << cheat << endl;
//	cout << hex;	//八进制
//	cout << cheat << endl;
//	cout << oct;	//十六进制
//	cout << cheat << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	char ch = 'M';
//	int i = ch;
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//	cout << "And one to the charcter code:" << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << "The ASCII code for " << ch << " is" << i << endl;
//	cout << "Displaying char ch using cout.put(ch)" << endl;
//	cout.put(ch);
//	cout.put('!');
//	cout.put(i);
//	cout << 'm';
//	char alarm = '\a';
//	cout << alarm << "Don`t do that again!\a\n";
//	cin.get();
//	return 0;
//}

//int main()
//{
//	/*cout << "\aOperation \"HyperHyte\" is now actvated!\n";
//	cout << "Enter your agent code________\b\b\b\b\b\b\b\b";
//	long code;
//	cin>>code;
//	cin.get();
//	cout << "\aYou entered " << code << "...\n";*/
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	float tub = 10.0 / 3.0;
//	double mint = 10.0 / 3.0;
//	cout << tub << endl;
//	cout << mint << endl;
//	cin.get();
//	return 0;
//}

int main()
{
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);	//迫使输出以定点表示法，防止程序将较大的值转换为E表示法
	cin >> hats;
	cin >> heads;
	cin.get();
	cout << hats + heads << endl;
	cout << hats - heads << endl;
	cout << hats * heads << endl;
	cout << hats / heads << endl;
	cin.get();
	return 0;
}
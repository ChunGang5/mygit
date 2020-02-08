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

//int main()
//{
//	float hats;
//	int heads;
//	cout.setf(ios_base::fixed, ios_base::floatfield);	//迫使输出以定点表示法，防止程序将较大的值转换为E表示法
//	cin >> hats;
//	cin >> heads;
//	cin.get();
//	cout << hats + heads << endl;
//	cout << hats - heads << endl;
//	cout << hats * heads << endl;
//	cout << hats / heads << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	int auks, bats, coots;
//	auks = 19.99 + 11.99;	//整型提升
//	bats = (int)19.99 + (int)11.99;
//	coots = int(19.99) + int(11.99);
//	cout << "auks = " << auks << endl;
//	cout << "bats = " << bats << endl;
//	cout << "coots = " << coots << endl;
//	
//	char ch = 'Z';
//	cout << ch << endl;
//	cout << int(ch) << endl;
//	cout << (int)ch << endl;
//	cout << static_cast<int>(ch) << endl;
//	cin.get();
//	return 0;
//}

//Ex3.1
//int main()
//{
//	const int in_per = 12;
//	cout << "Enter you height:___\b\b\b\a" ;
//	int height = 0;
//	cin >> height;
//	cin.get();
//	cout << height / in_per << endl;
//	cout << height%in_per << endl;
//	cin.get();
//	return 0;
//}

//Ex3.2
//int main()
//{
//	const int inch_per_inch = 12;
//	const double inch_per_height = 0.0245;
//	const double inch_per_ki = 2.2;
//	
//	cout << "Enter you height1___\b\b\b\a";
//	double height1;
//	cin >> height1;
//	cin.get();
//	cout << "Enter you height2___\b\b\b\a";
//	double height2;
//	cin >> height2;
//	cin.get();
//	cout << "Enter you weight___\b\b\b\a";
//	double weight;
//	cin >> weight;
//	cin.get();
//
//	double a = height1 * inch_per_inch + height2;
//	double b = weight / inch_per_ki;
//	double c = a * inch_per_height;
//	cout << b / (c*c) << endl;
//	cin.get();
//	return 0;
//}

//Ex3.3
//int main()
//{
//	const int inch = 60;
//	cout << "Enter a latitude in degress, minutes and seconds:" << endl;
//	cout << "First,enter the degrees:__\b\b\a";
//	double degress;
//	cin >> degress;
//	cout << "Next,enter the minutes of arc: __\b\b\a";
//	double minutes;
//	cin >> minutes;
//	cout << "Finally,enter the seconds of arc: __\b\b\a";
//	double seconds;
//	cin >> seconds;
//	cin.get();
//	double a = degress + minutes / inch + seconds / inch / inch;
//	cout << degress << " degress, " << minutes << " minutes, " << seconds << " seconds = " << a << endl;
//	cin.get();
//	return 0;
//}

//Ex3.4
//int main()
//{
//	const int inch = 60;
//	const int One_Day_hour = 24;
//	cout << "Enter the number of seconds:";
//	long seconds;
//	cin >> seconds;
//	cin.get();
//	int day, minutes, hours, second_t;
//	day = seconds / inch / inch / One_Day_hour;
//	hours = seconds / inch / inch%One_Day_hour;
//	minutes = seconds / inch%inch;
//	second_t = seconds%inch;
//	cout << seconds << " seconds = " << day << " days, " << hours << " hours, " << minutes << " minutes, " << second_t << " seconds.";
//	cin.get();
//	return 0;
//}

//Ex3.5
//int main()
//{
//	cout << "Enter the world's population:";
//	long long World_peo;
//	cin >> World_peo;
//	cin.get();
//	cout << "Enter the population of the US:";
//	long long US_peo;
//	cin >> US_peo;
//	cin.get();
//	double a = 100*US_peo / World_peo;
//	cout << "The population of the US is " << a<< " % of the world population." << endl;
//	cin.get();
//	return 0;
//}


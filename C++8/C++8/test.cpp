#include<iostream>
#include<string>
#include<array>
#include<fstream>
#include<cstring>

using namespace std;

//int main()
//{
//	int rats = 101;
//	int *pt = &rats;
//	int &rodents = *pt;
//	int bunnies = 50;
//	pt = &bunnies;
//	return 0;
//}

//double refcube(const double &n)
//{
//	return n*n*n;
//}
//void swapr(const double & a, const double & b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	double x = 3.0;
//	double y = 5.0;
//	int c = 2;
//	int b = 5;
//	cout << refcube(x) << endl;
//	swapr(c, b);
//	cin.get();
//	return 0;
//}

//void file_it(ostream & os, double fo, const double fe[], int n);
//const int LIMIT = 5;
//int main()
//{
//	ofstream fout;
//	const char *fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open())
//	{
//		cout << "Cant't open " << fn << endl;
//		exit(EXIT_FAILURE);
//	}
//	double objective;
//	cout << "Enter the focal length of your"
//		"telescope objective in mm:";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "Enter the focal lenghts,in mm,of " << LIMIT
//		<< " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++)
//	{
//		cout << "Eyepiece #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//	cin.get();
//	file_it(fout, objective, eps, LIMIT);
//	file_it(cout, objective, eps, LIMIT);
//	cin.get();
//	return 0;
//}
//void file_it(ostream & os, double fo, const double fe[], int n)
//{
//	ios_base::fmtflags initial;
//	initial = os.setf(ios_base::fixed);
//	os.precision(0);
//	os << "Focal length of objective: " << fo << " mm\n";
//	os.setf(ios::showpoint);
//	os.precision(1);
//	os.width(15);
//	os << "f.1. eyepiece";
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < LIMIT; i++)
//	{
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//	os.setf(initial);
//}

//int main()
//{
//	cout.width(30);
//	cout << "dfiial" << "canca" << endl;
//	cout << "dfgvhjbnklm;,dxfcgvhjbnklm,;xdfcgvhjbnklm" << endl;
//	cin.get();
//	return 0;
//}

//unsigned long left(unsigned long num, unsigned ct);
//char *left(const char *str, int n = 1);
//
//int main()
//{
//	char *trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char *temp;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;
//	}
//	cin.get();
//	return 0;
//}
//unsigned long left(unsigned long num, unsigned ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//	if (ct == 0 || num == 0)
//	{
//		return 0;
//	}
//	while (n /= 10)
//		digits++;
//	if (digits > ct)
//	{
//		ct = digits - ct;
//		while (ct--)
//			num /= 10;
//		return num;
//	}
//	else return num;
//}
//char *left(const char *str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	char *p = new char[n + 1];
//	int i;
//	for (i = 0; i < n&&str[i]; i++)
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)
//		p[i++] = '\0';
//	return p;
//}


//template <typename T>
//void Swap(T & a, T & b);
//
//int main()
//{
//	int i = 10;
//	int j = 20;
//	cout.setf(ios_base::fixed);
//	Swap(i, j);
//	cout << i << j << endl;
//	double k = 151.15165;
//	double g = 1561651.155;
//	Swap(k, g);
//	cout << k <<"      "<< g;
//	cin.get();
//	return 0;
//}
//template<typename T>
//void Swap(T & a, T & b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//Ex8.1
//void display(const char* str);
//void display(const char* str, int n);
//
//int main()
//{
//	char *str = "rfytugdq";
//	display(str);
//	display(str, 0);
//	display(str, 3);
//	cin.get();
//	return 0;
//}
//void display(const char* str)
//{
//	cout << str << endl;
//}
//void display(const char* str, int n)
//{
//	if (n != 0)
//	{
//		cout << str << endl;
//	}
//}

//Ex8.2
//struct CandyBar
//{
//	char name[50];
//	double weigth;
//	int hat;
//};
//
//void full_CandyBar(CandyBar & x, char *name="Millennium", double weigth=2.85, int n=350);
//void display(const CandyBar & x);
//int main()
//{
//	CandyBar ad = {};
//	char user_name[50];
//	double user_weigth;
//	int user_hat;
//	cin.getline(user_name, 50);
//	cin >> user_weigth;
//	cin >> user_hat;
//	cin.get();
//	full_CandyBar(ad, user_name, user_weigth, user_hat);
//	display(ad);
//	full_CandyBar(ad);
//	display(ad);
//	cin.get();
//	return 0;
//	
//}
//void full_CandyBar(CandyBar & x, char *name, double weigth, int n)
//{
//	strcpy(x.name, name);
//	x.weigth = weigth;
//	x.hat = n;
//}
//void display(const CandyBar & x)
//{
//	cout << x.name << endl;
//	cout << x.weigth << endl;
//	cout << x.hat << endl;
//}

////Ex8.3
//
//int main()
//{
//	string str;
//	cout << "Enter a string (q to quit): " ;
//	getline(cin, str);
//	while (str[0]!='q')
//	{
//		for (size_t i = 0; i < str.length(); i++)
//		{
//			str[i] = toupper(str[i]);
//		}
//		cout << str << endl;
//		cout << "Next string (q to quit) :";
//		getline(cin, str);
//	}
//	return 0;
//}

//Ex8.4
//struct stringy
//{
//	char *str;
//	int ct;
//};
//
//void set(stringy & pd, const char* str)
//{
//	int str_length = strlen(str);
//	pd.str = new char(str_length + 1);
//	strcpy(pd.str, str);
//	pd.ct = str_length;
//}
////
////void show(const stringy & pd, int n = 2);
//void show(const stringy & pd, int n = 1)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << pd.str << endl;
//	}
//}
//void show(const char* arr, int n = 1)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr << endl;
//	}
//}
//int main()
//{
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//	set(beany, testing);
//	show(beany);
//	show(beany, 2);
//	testing[0] = 'D';
//	testing[1] = 'u';
//	show(testing);
//	show(testing, 3);
//	cin.get();
//	return 0;
//
//}

//Ex8.5
//template<typename T>
//T max5(T arr[])
//{
//	T max = arr[0];
//	for (size_t i=0; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	double arr2[5] = { 2.0, 4.6, 151.7, 8.9, 75.1 };
//	
//	cout<<max5(arr1)<<endl;
//	cout<<max5(arr2)<<endl;
//	cin.get();
//	return 0;
//}

//Ex8.6
//template<typename T>
////T maxn(T arr[], N n)
////{
////	n = sizeof(arr) / sizeof(arr[0]);
////	T max = arr[0];
////	for (size_t i=0; i < n; i++)
////	{
////		if (max < arr[i])
////		{
////			max = arr[i];
////		}
////	}
////	return max;
////}
//template <>const char * maxn(const char * arr[],int n)
//{
//
//}
//template <typename T>
//T maxn(T in_array[], int array_size)
//{
//	T max = in_array[0];
//	for (int i = 0; i < array_size; i++)
//	{
//		if (max < in_array[i])
//		{
//			max = in_array[i];
//		}
//	}
//
//	return max;
//}
//// 显示具体化
//template <> const char * maxn(const char *in_str[], int n)
//{
//	const char * str = in_str[0];
//
//	for (int i = 0; i < n; i++)
//	{
//		if (strlen(str) < strlen(in_str[i]))
//		{
//			str = in_str[i];
//		}
//	}
//
//	return str;
//}
//int main()
//{
//
//}

//Ex8.7
//template<typename T>
//T SumArray(T arr[], int n);
//template<typename T>
//T SumArray(T *arr[], int n);
//
//struct debts
//{
//	char name[50];
//	double amount;
//};
//
//int main()
//{
//	int things[6] = { 13, 31, 103, 301, 310, 130 };
//	struct debts mr_E[3]
//	{
//		{ "Ima Wolfe",2400.0 },
//		{ "Ura Foxe",1300.0 },
//		{ "Iby Stout",1800.0 }
//	};
//	double *pd[3];
//	double sum_double = 0;
//	for (int i = 0; i < 3; i++)
//		pd[i] = &mr_E[i].amount;
//	int sum = SumArray(things, 6);
//	sum_double = SumArray(pd, 3);
//	cout << sum << endl;
//	cout << sum_double << endl;
//	cin.get();
//	return 0;
//}
//template<typename T>
//T SumArray(T arr[], int n)
//{
//	T sum = 0;
//	for (size_t i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}



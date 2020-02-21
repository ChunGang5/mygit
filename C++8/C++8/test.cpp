#include<iostream>
#include<string>
#include<array>
#include<fstream>

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


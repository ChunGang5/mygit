#include<iostream>
#include<string>

using namespace std;
//
//int main()
//{
//
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n[100] = { 1, 2 };
//	for (int i = 2; i < 100; i++)
//	{
//		n[i] = n[i - 1] + n[i - 2];
//	}
//	int day;
//	while (cin >> day)
//	{
//		cout << n[day - 1] << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//
//int main()
//{
//	TestFunc();
//	cin.get();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 20;
//	cout << sizeof(nullptr) << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	/*struct Test
//	{
//		char a;
//		int c;
//		short d;
//	};*/
//	class A1 {
//	public:
//		void f1(){}
//	private:
//		int _a;
//	};
//	// 类中仅有成员函数
//	class A2 {
//	public:
//		void f2() {}
//	};
//	// 类中什么都没有---空类
//	class A3
//	{};
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	cin.get();
//	return 0;
//}

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = NULL;
//	p->PrintA();
//	p->Show();
//	cin.get();
//	return 0;
//}

//class Date
//{
//public:
//	Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 以下测试函数能通过编译吗？
//void Test()
//{
//	Date d1;
//}

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//	cin.get();
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// bool operator==(Date* this, const Date& d2)
//	// 这里需要注意的是，左操作数是this指向的调用函数的对象
//	bool operator==(const Date& d2)
//	{
//		return _year == d2._year
//			&& _month == d2._month
//			&& _day == d2._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test()
//{
//	Date d1(2018, 9, 26);
//	Date d2(2018, 9, 27);
//	cout << (d1 == d2) << endl;
//}
//int main()
//{
//	void Test();
//	cin.get();
//	return 0;
//}

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2("world");
//	s1 = s2;
//	cin.get();
//	return 0;
//}

// write your code here cpp
//#include<iostream>
//#include<vector>
//using namespace std;
//
////通过vector创建的二维数组进行递归调用，把已经走过的结点标记成'1',避免访问过的
////结点重复计数
//void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int& count)
//{
//	//count通过引用的方式，正好递归调用进行计数
//	if (x<0 || y<0 || x >= m || y >= n || v[x][y] == '1' || v[x][y] == '#')
//		return;
//	count++;
//	v[x][y] = '1';
//	BlackCount(v, x - 1, y, m, n, count);
//	BlackCount(v, x, y - 1, m, n, count);
//	BlackCount(v, x + 1, y, m, n, count);
//	BlackCount(v, x, y + 1, m, n, count);
//}
//
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		int x, y;
//		int count = 0;
//		vector<vector<char>> v(m, vector<char>(n, 0));
//		for (size_t i = 0; i<m; i++)
//		{
//			for (size_t j = 0; j<n; j++)
//			{
//				cin >> v[i][j];
//				if (v[i][j] == '@')
//				{
//					x = i;//x标记起始i结点
//					y = j;//y表示起始j结点
//				}
//			}
//		}
//		BlackCount(v, x, y, m, n, count);
//		cout << count << endl;
//	}
//	return 0;
//}

//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//class Date
//{
//public:
//	Date(int day)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//	cin.get();
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//	{}
//	explicit Date(int year)
//		:_year(year)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2018);
//	// 用一个整形变量给日期类型对象赋值
//	// 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值
//	d1 = 2019;
//}
//int main()
//{
//	TestDate();
//	cin.get();
//	return 0;
//}

//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, const Date& d);
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private :
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
////istream& operator>>(istream& _cin, const Date& d)
////{
////	_cin >> d._year;
////	_cin >> d._month;
////	_cin >> d._day;
////	return _cin;
////}
//int main()
//{
//	Date d(1996,9,15);
//	cin >> d;
//	cout << d << endl;
//	return 0;
//}
//class A
//{
//private:
//	static int k;
//	int h;
//public:
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;//OK
//			cout << a.h << endl;//OK
//		}
//	};
//};
//int A::k = 1;
//int main()
//{
//	A::B b;
//	b.foo(A());
//	cin.get();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Day
//{
//public:
//	Day(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	int Description(int _year,int _month,int _day)
//	{
//		
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//#include<iostream>
//using namespace std;
//int iConverDateToDay(int year, int month, int day)
//{
//	if (year <= 0 || month <= 0 || day <= 0 || month>12 || day>31)
//	{
//		return -1;
//	}
//	int lemp[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int Nolemp[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	bool flag;
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		flag = true;
//	}
//	else
//	{
//		flag = false;
//	}
//	if (flag)
//	{
//		if (day>lemp[month - 1])
//		{
//			return -1;
//		}
//	}
//	else
//	{
//		if (day>Nolemp[month - 1])
//		{
//			return -1;
//		}
//	}
//	int temp = 0;
//	for (int i = 0; i<month - 1; i++)
//	{
//		if (flag)
//		{
//			temp += lemp[i];
//		}
//		else
//			temp += Nolemp[i];
//	}
//	return temp + day;
//}
//int main()
//{
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//		cin.get();
//		cout << iConverDateToDay(year, month, day) << endl;
//		cin.get();
//		return 0;
//	}
//	return 0;
//}

const int MAX = 50;
int main()
{
	cout << MAX << endl;
	cin.get();
	return 0;
}

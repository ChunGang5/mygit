#include<iostream>
using namespace std;

//int main()
//{
//	cout << "Come up and C++ me some time.";
//	cout << endl;
//	cout << "You won't regret it!" << endl;
//	cin.get();	//使窗口保持
//	return 0;
//}

//void main()
//{
//	int carrots;
//	cout << "How many carrots do you have?" << endl;
//	cin >> carrots;
//	cin.get();
//	cout << "Here are two more.\n";			//可用\n换行
//	carrots = carrots + 2;
//	cout << "Now you have " << carrots << " carrots." << endl;
//	cin.get();
//}

//void simon(int);
//
//int main()
//{
//	simon(3);
//	cout << "pick an integer:";
//	int count;
//	cin >> count;
//	cin.get();
//	simon(count);
//	cout << "Done!" << endl;
//	cin.get();
//	return 0;
//}
//void simon(int n)
//{
//	cout << "Simon says touch your toes " << n << " times." << endl;
//}

//int stonetolb(int);

//int main()
//{
//	int stone;
//	cout << "Enter the weight in stone: ";
//	cin >> stone;
//	cin.get();
//	cout << "weight is " << stonetolb(stone) << endl;
//	cin.get();
//	return 0;
//}
//int stonetolb(int sto)
//{
//	return sto * 14;
//}

//复习题
//Ex2.7.2
//int main()
//{
//	cout << "请输入一个距离，单位为：long" << endl;
//	int distance;
//	cin >> distance;
//	cin.get();
//	cout << distance * 220 << "(码）" << endl;
//	cin.get();
//	return 0;
//
//}

//Ex2.7.3
//void Show_1(void);
//void Show_2(void);
//int main()
//{
//	Show_1();
//	Show_1();
//	Show_2();
//	Show_2();
//	cin.get();
//	return 0;
//}
//
//void Show_1()
//{
//	cout << "Three blind mice" << endl;
//}
//void Show_2()
//{
//	cout << "See how they run" << endl;
//}

//Ex2.7.4
//int main()
//{
//	cout << "Please you age" << endl;
//	int age;
//	cin >> age;
//	cin.get();
//	cout << "The age have " << age * 12 << " years" << endl;
//	cin.get();
//	return 0;
//}

////Ex2.7.5
//double Transform(double);
//
//int main()
//{
//	cout << "please enter a Celsius value: ";
//	double value;
//	cin >> value;
//	cin.get();
//	cout << value << " degrees Celsius is " << Transform(value) << " degrees Fahrenheit" << endl;
//	cin.get();
//	return 0;
//}
//
//double Transform(double n)
//{
//	return 1.8*n + 32.0;
//}

////Ex2.7.6
//double Transform(double);
//int main()
//{
//	cout << "Enter the number of light years:";
//	double number;
//	cin >> number;
//	cin.get();
//	cout << number << " light years = " << Transform(number) << "satronomical units." << endl;
//	cin.get();
//	return 0;
//}
//double Transform(double n)
//{
//	return 63240 * n;
//}

//Ex2.7.7
void Time(int,int);
int main()
{
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cin.get();
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	cin.get();
	Time(hours,minutes);
	cin.get();
	return 0;
}
void Time(int x,int y)
{
	cout << "Time: " << x << ":" << y << endl;
}
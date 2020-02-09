#include<iostream>
using namespace std;

//int main()
//{
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter you name:\n";
//	//cin >> name;
//	//cin.getline(name, ArSize);
//	cin.get(name, ArSize);
//	cin.get();
//	cout << "Enter you favorite dessert:\n";
//	//cin >> dessert;
//	//cin.getline(dessert, ArSize);
//	//cin.get();
//	cin.get(dessert, ArSize);
//	cin.get();
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n ";
//	cin.get();
//	return 0;
//}

int main()
{
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its stream address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cin.get();
	return 0;
}


#include<iostream>
#include<string>
#include<cstring>
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

//int main()
//{
//	cout << "What year was your house built?\n";
//	int year;
//	cin >> year;
//	cin.get();
//	cout << "What is its stream address?\n";
//	char address[80];
//	cin.getline(address, 80);
//	cout << "Year built: " << year << endl;
//	cout << "Address: " << address << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	string s1 = "dfghjkl";
//	string s2, s3;
//	s2 = s1;
//	cout << "s2:" <<s2<< endl;
//	cout << "s2=\"sadaq\"" << endl;
//	cout << "s2:" << s2 << endl;
//	s2 = "fgdbgfrfedw";
//	s3 = s1 + s2;
//	cout << "s3:" << s3 << endl;
//	s1 += s2;
//	cout << "s1:" << s1 << endl;
//	cin.get();
//	return 0;
//
//}

//int main()
//{
//	char s1[20];
//	char s2[20]="dafg";
//	string str1;
//	string str2 = "awdfe"; 
//	strcpy(s1, s2);
//	cout << s1 << endl; 
//	str1 += str2;
//	cout << str1 << endl;
//	strcat(s1, "dawd");
//	cout << s1 << endl;
//	int len1 = str1.length();
//	int len2 = strlen(s1);
//	cout << len1 << endl;
//	cout << len2 << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	/*char s1[20];
//	cin.get(s1, 20);
//	cin.get();
//	string s2;
//	getline(cin,s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;*/
//	cout << R"(jsi  nanv \n xnaj)" << endl;
//	cout << "chengang is \"lkc\"" << endl;
//	cin.get();
//	return 0;
//}

//struct inflatable
//{
//	//char name[20];
//	string name;
//	float voliume;
//	double price;
//};
//
//int main()
//{
//	inflatable guest =
//	{
//		"chengang",
//		154.4,
//		5566.85
//	};
//	
//
//	std::cout << guest.name << endl;
//	std::cin.get();
//	return 0;
//}

//struct inflatable
//{
//	//char name[20];
//	string name;
//	float voliume;
//	double price;
//};
//int main()
//{
//	inflatable bouquet =
//	{
//		"陈刚",
//		12.8,
//		4550.58
//	};
//	cout << bouquet.name << endl;
//	inflatable choice;
//	choice = bouquet;
//	cout << choice.voliume << endl;
//	cin.get();
//	return 0;
//}

//结构数组
//struct inflatable
//{
//	//char name[20];
//	string name;
//	float voliume;
//	double price;
//};
//int main()
//{
//	inflatable guests[2]=
//	{
//		{ "chengang",14.7,145.85 },
//		{ "lkc",85.42,95.1 }
//	};
//	cout << guests[0].name << endl;
//	cout << guests[1].voliume << endl;
//	cin.get();
//	return 0;
//}

//union check
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	check s1;
//	s1.i = 1;
//	cout.put('s1.c');
//	cin.get();
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//返回1表示小端，返回0表示大端
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int nights = 1001;
//	int *pt = new int;
//	*pt = 1001;
//
//	cout << nights << "   "<<&nights<<endl;
//	cout << *pt << "   " << pt << endl;
//
//	double *pd = new double;
//	*pd = 10001.00;
//	
//	cout << *pd << "   " << pd << endl;
//	cout << &pd << endl;
//	cout << sizeof pt << endl;
//	cout << sizeof(*pt) << endl;
//
//	delete(pt);
//	delete pd;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	/*int *pt = new int;
//	delete[] pt;
//	cin.get();
//	return 0;*/
//	int arr1[10];
//	int *arr2 = new int[];
//	arr2[0] = 1;
//	arr2[1] = 2;
//	arr2[2] = 3;
//	
//	cout << arr2[0] << endl;
//	arr2 = arr2 + 1;
//	cout << arr2[0] << endl;
//	cout << arr2[1] << endl;
//
//	arr2 = arr2 - 1;
//	cout << arr2[0] << endl;
//
//	delete[] arr2;
//	cin.get();
//	return 0;
//}

int main()
{

}

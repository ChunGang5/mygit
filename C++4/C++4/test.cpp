#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<array>
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
//	/*cin.get();*/
//	cout << "What is its stream address?\n";
//	char address[80];
//	/*cin.getline(address, 80);*/
//	cin >> address;
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
//		"�¸�",
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

//�ṹ����
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//����1��ʾС�ˣ�����0��ʾ���
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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

//int main()
//{
//	int arr1[3] = { 0, 1, 2 };
//	int *pt = arr1;
//	cout << pt[1] << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	char animal[20] = "bear";
//	const char *brid = "wren";
//	char *ps;
//
//	cout << animal << " and " << brid << endl;
//	cin >> animal;
//	cin.get();
//	ps = animal;
//	cout << ps << endl;
//	cout << animal << " at " << (int*)animal << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << animal << (int*)animal << endl;
//	cout << ps << (int*)ps << endl;
//	delete[] ps;
//	cin.get();
//	return 0;
//}

//struct inflatable
//{
//	char name[20];
//	float vplume;
//	double price;
//};
//int main()
//{
//	/*inflatable st =
//	{
//		"chengang",
//		45.125,
//		85.14
//	};
//	cout << st.name << endl;
//	cout << st.name << endl;*/
//
//	inflatable *ps = new inflatable;
//	cin.get(ps->name, 20);
//	cin.get();
//	cin >> (*ps).price;
//	cin >> (*ps).vplume;
//	cin.get();
//	cout << ps->name << endl;
//	cin.get();
//	delete ps;
//	return 0;
//}

//char *getname(void);
//char *getname()
//{
//	char temp[80];
//	cout << "Enter last name:";
//	cin >> temp;
//	char *pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//	return pn;
//}
//
//int main()
//{
//	char *name;
//	name = getname();
//	cout << name << " at " << (int*)name << endl;
//	delete[] name;
//
//	name = getname();
//	cin.get();
//	cout << name << " at " << (int*)name << endl;
//	cin.get();
//	delete[] name;
//	return 0;
//}

//struct inflatable
//{
//	char name[20];
//	float vplume;
//	double price;
//};
//
//int main()
//{
//	inflatable s1;
//	s1.price = 15;
//	cout << s1.price << endl;
//	cin >> s1.name;
//	cin.get();
//	cout << s1.name << endl;
//	cin.get();
//	return 0;
//}

//struct antarctica_years_end
//{
//	int year;
//};
//
//int main()
//{
//	antarctica_years_end s01, s02, s03;
//	s01.year = 1998;
//	antarctica_years_end *pa = &s02;
//	pa->year = 1999;
//	antarctica_years_end trio[3];
//	trio[0].year = 2003;
//	cout << trio[0].year << endl;
//
//	const antarctica_years_end *arp[3] = { &s01, &s02, &s03 };
//	cout << arp[1]->year << endl;
//
//	auto ppd = arp;
//	cout << (*ppd)->year << endl;
//	cout << (*(ppd + 1))->year << endl;
//	cin.get();
//	return 0;
//
//}

//int main()
//{
//	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
//	vector<double> a2(4);
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//
//	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
//	array<double, 4> a4;
//	a4 = a3;
//	cout << a1[0] << endl;
//	cout << a1[1] << endl;
//	cout << a1[2] << endl;
//	cout << a1[3] << endl;
//	a1[-2] = 20.2;
//	cin.get();
//	return 0;
//}

//struct feesh
//int main()
//{
//	char s1[] = "cnajn";
//	string s2 = "fghj";
//
//}

//Ex4.1
//struct display
//{
//	char firstname[20];
//	char lastname[20];
//	int grade;
//	int age;
//};
//int main()
//{
//	display *pt = new display;
//	cout << "what is you first name? ";
//	cin.getline(pt->firstname, 20);
//	cout << "What is your last name? ";
//	cin.get(pt->lastname, 20);
//	
//	cout << "What letter grade do you deserve? ";
//	cin >> pt->grade;
//	cout << "What is your age? ";
//	cin >> pt->age;
//	cin.get();
//	cout << "Grade: " <<pt->grade<< endl;
//	cout << "Age: " << pt->age << endl;
//	cin.get();
//	return 0;
//}

//Ex4.2
//int main()
//{
//	string name;
//	string dessert;
//
//	cout << "Enter your name:\n";
//	cin >> name;
//	cout << "Enter your favorite dessert:\n";
//	cin >> dessert;
//	cin.get();
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << endl;
//	cin.get();
//	return 0;
//}

//Ex4.4
//int main()
//{
//	const int Size = 20;
//	char first_name[Size];
//	char last_name[Size];
//	char name[Size * 2 + 1];
//
//	cout << "Enter you first name:";
//	cin.getline(first_name, Size);
//	cout << "Enter your last name:";
//	cin.getline(last_name, Size);
//	strcpy(name, last_name);
//	strcat(name, ",");
//	strcat(name, first_name);
//	cout << "Here's the information in a single string:" << name << endl;
//	cin.get();
//	return 0;
//}

//Ex4.5
struct CandyBar
{
	char kind[20];
	double weigth;
	int kcal;
};

//int main()
//{
//	CandyBar snack =
//	{
//		"Mocha Munch",
//		2.3,
//		350
//	};
//	cout << snack.kcal << endl;
//	cout << snack.kind << endl;
//	cout << snack.weigth << endl;
//	cin.get();
//	return 0;
//}

//Ex4.6
//int main()
//{
//	CandyBar a[3];
//	a[0] = { "vbnm", 5.2, 46 };
//	cout << a[0].kcal << endl;
//	cout << a[0].kind << endl;
//	cout <<a[0].weigth << endl;
//	cin.get();
//	return 0;
//}

//Ex4.7
struct Pizza
{
	char name[20];
	double calibre;
	double weight;
};

//int main()
//{
//	Pizza pie;
//	cout << "name:";
//	cin.getline(pie.name, 20);
//	cout << "calibre:";
//	cin >> pie.calibre;
//	cout << "weigth:";
//	cin >> pie.weight;
//	cin.get();
//	cout << "name:" << pie.name << endl;
//	cout << "calibre:" << pie.calibre << endl;
//	cout << "weigth:" << pie.weight << endl;
//	cin.get();
//	return 0;
//}

//Ex4.8
//int main()
//{
//	Pizza *pt = new Pizza;
//	cout << "calibre:";
//	cin >> pt->calibre;
//	cout << "name";
//	cin >> (*pt).name;
//	cin.get();
//	cout << "name:" << pt->name;
//	cin.get();
//	return 0;
//}

//Ex4.9
//int main()
//{
//	CandyBar *pt = new CandyBar[3];
//	cin >> (*(pt + 1)).kcal;
//	
//}

//Ex4.10
//int main()
//{
//	const int Size = 3;
//	array<double, Size> a;
//	vector<int> a2(Size);
//
//	cin >> a[0];
//	cin >> a[1];
//	cin >> a[2];
//	cin.get();
//	cout << "and:" << a[0] + a[1] + a[2] << endl;
//	cout << "avergae:" << (a[0] + a[1] + a[2]) / 3 << endl;
//	cin.get();
//	return 0;
//}
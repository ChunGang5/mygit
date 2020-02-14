#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<cstring>
#include<ctime>
using namespace std;

//int main()
//{
//	int by;
//	cin >> by;
//	cin.get();
//	cout << "Counting by" << by << endl;
//	for (int i = 0; i < 100; i = i + by)
//		cout << i <<  endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	cout << "Enter a word:";
//	string word;
//	cin >> word;
//	cin.get();
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; ++j, --i)
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	char str1[5] = "def";
//	char str2[5] = "bcg";
//	if (strcmp(str1, str2)<0)
//	{
//		cout << "fgbhnjm" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	string str = "fghjk";
//	str[0] =' g';
//	cout << str << endl;
//	cin.get();
//	return 0;
//}
//
//int main()
//{
//	float sea;
//	cin >> sea;
//	clock_t daliy = sea*CLOCKS_PER_SEC;
//	clock_t start = clock();
//	while (clock() - start < daliy)
//		;
//	cin.get();
//	cout << "done\a\n";
//	cin.get();
//	return 0;
//
//}

//int main()
//{
//	char ch;
//	int count = 0;
//	cin.get(ch).get();
//	
//	while (ch != '#')
//	{
//		cout << ch; 
//		++count;
//		cin.get(ch);
//	}
//	cin.get();
//	cout << endl << count << " cna\n";
//	cin.get();
//	return 0;
//}

//int main()
//{
//	/*char ch;
//	int count = 0;
//	cin.get(ch);
//	while (cin.fail() == false)
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cin.get();
//	cout << endl << count << " characters read\a\n";*/
//	cout.put(97);
//	cin.get();
//	return 0;
//}

//Ex5.1
//int main()
//{
//	int a, b;
//	cout << "Enter tow number:";
//	cin >> a >> b;
//	cin.get();
//	int sum = 0;
//	for (a; a <= b; a++)
//	{
//		sum += a;
//	}
//	cout << sum << endl;
//	cin.get();
//	return 0;
//}

//Ex5.2
//int main()
//{
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	array<long double, 101> arr1;
//	arr1[0] = arr1[1] = 1;
//	for (int i = 2; i < 101; i++)
//	{
//		arr1[i] = i*arr1[i - 1];
//	}
//	for (int i = 0; i < 101; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//	cin.get();
//	return 0;
//}

//Ex5.3
//int main()
//{
//	int num = 0,sum=0;
//	while ((cin >> num)&&num!=0)
//	{
//		sum += num;
//		cout << sum << endl;
//	}
//	cin.get();
//	return 0;
//}

//Ex5.4
//int main()
//{
//	int menoy = 100;
//	double Cleo=0, Daphone=0;
//	int i = 0;
//	for (i = 0; Cleo <= Daphone; i++)
//	{
//		Daphone = Daphone + menoy * 0.1 ;
//		Cleo = (100 + Cleo)*0.05 + Cleo;
//	}
//	cout << i << endl;
//	cin.get();
//	return 0;
//}

//Ex5.5
//const int MONTHS = 12;
//string months[MONTHS] 
//= { "January", "February", "March", "April", "May", "June", "July", "August", "September","October","November","December"};

//int main()
//{
//	int sum = 0;
//	double sales[MONTHS] = {};
//	for (int i = 0; i < MONTHS; i++)
//	{
//		cin >> sales[i];
//		sum += sales[i];
//	}
//	cin.get();
//	for (int i = 0; i < MONTHS; i++)
//	{
//		cout << months[i] << " " << sales[i ]<<endl;
//	}
//	cout << sum << endl;
//	cin.get();
//	return 0;
//}

//Ex5.6
//int main()
//{
//	double sales[12][3] = {};
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < MONTHS; j++)
//		{
//			cin >> sales[i][j];
//			sum += sales[i][j];
//		}
//	}
//	cin.get();
//	cout << sum << endl;
//	cin.get();
//	return 0;
//}

//Ex5.7
//struct Car
//{
//	string name;
//	int year;
//};
//
//int main()
//{
//	
//	int num;
//	cout << "How many cars do you have?" << endl;
//	cin >> num;
//	cin.get();
//	Car *pt = new Car[num];
//	for (int i = 0; i < num; i++)
//	{
//		getline(cin, pt[i].name);
//		cin >> pt[i].year;
//		cin.get();
//	}
//	for (int i = 0; i < num; i++)
//	{
//		cout << pt[i].year << " " << pt[i].name << endl;
//	}
//	cin.get();
//	delete[] pt; 
//	return 0;
//}

//Ex5.8
//int main()
//{
//	char word[20];
//	int sum = 0;
//	cin >> word;
//	while (strcmp(word, "done"))
//	{
//		sum += 1;
//		cin >> word;
//	}
//	//cin.get();
//	cout << sum << endl;
//	cin.get();
//	return 0;
//}

//Ex5.9
//int main()
//{
//	int num;
//	cin >> num;
//	cin.get();
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num - i-1; j++)
//		{
//			cout << ".";
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	cin.get();
//	return 0;
//}


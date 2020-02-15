#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cctype>
using namespace std;

//int main()
//{
//	char ch;
//	cout << "Type, and i shall repet.\n";
//	cin.get(ch);
//	while (ch != '.')
//	{
//		if (ch == '\n')
//		{
//			cout << ch;
//		}
//		else
//			cout << ch+1;//?
//		cin.get(ch);
//	}
//	cout << "\nPlease excuse the slight confusion.\n";
//	cin.get();
//	return 0;
//}

//enum{red,orange,yellow,green,blue,violet,indigo};
//
//int main()
//{
//	cout << "Enter color code(0-6):" << endl;
//	int code;
//	cin >> code;
//	while (code >= red&&code <= indigo)
//	{
//		switch (code)
//		{
//		case red:
//			cout << "Her lips were red.\n";
//			break;
//
//		case orange:
//			cout << "Her hair was orange.\n\a";
//			break;
//		default:
//			cout << "error";
//		}
//		cout << "Enter color code(0-6):" << endl;
//		cin >> code;
//	}
//	cin.get();
//	cout << "Bye\n";
//	cin.get();
//	return 0;
//}

//int main()
//{
//	char line[80];
//	int spaces=0;
//	cin.get(line, 80);
//	for (int i = 0; line[i] != '\0'; i++)
//	{
//		cout << line[i];
//		if (line[i] == '.')
//			break;
//		if (line[i] != ' ')
//			continue;
//		spaces++;
//	}
//	cin.get();
//	cout << "\n" << spaces << endl;
//	cin.get();
//	return 0;
//}

//const int Max = 5;
//int main()
//{
//	int golf[Max];
//	cout << "Enteryour golf scores.\n";
//	cout << "You must enter " << Max << " rounds.\n";
//	int i;
//	for (i = 0; i < Max; i++)
//	{
//		cout << "round #" << i + 1 << ": ";
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//			cout << "Please enter a number:";
//		}
//	}
//	cin.get();
//	double total = 0.0;
//	for (i = 0; i < Max; i++)
//	{
//		total += golf[i];
//	}
//	cout << total / Max << " = average sorce " << Max << " rounds";
//	cin.get();
//	return 0;
//}

//int main()
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_Price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "Enter the make and model of automobile:";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the model asking price: ";
//	cin >> a_price;
//	cin.get();
//	d_Price = 0.973*a_price;
//	
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "Make and model: " << automobile << endl;
//	cout << "year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_Price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_Price << endl;
//
//	outFile.close();
//	cin.get();
//	return 0;
//}

//const int SIZE = 60;
//int main()
//{
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "Enter name of data file: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		cin.get();
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Inout terminated for unkown reason.\n";
//	if (count == 0)
//		cout << "No data processed.\n";
//
//	else
//	{
//		cout << "Items read: " << count << endl;
//		cout << "Sum: " << sum << endl;
//		cout << "Average: " << sum / count << endl;
//	}
//	
//	cin.get();
//	inFile.close();
//	return 0;
//}

//Ex6.1
//int main()
//{
//	
//	char ch ;
//	cin.get(ch);
//	
//	while (ch != '@')
//	{
//		if (isdigit(ch))
//			;
//		else if (isalpha(ch))
//		{
//			if (isupper(ch))
//			{
//				ch = tolower(ch);
//				cout.put(ch);
//			}
//			else
//			{
//				ch = toupper(ch);
//				cout.put(ch);
//			}
//		}
//		else
//			cout.put(ch);
//		cin.get(ch);
//		
//	}
//	cout << "Done!" << endl;
//	cin.get();
//	return 0;
//}

//Ex6.2
//const int SIZE = 10;
//int main()
//{
//	array<double, 10> arr;
//	double sum = 0;
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//		
//		if (isdigit(arr[i]))
//		{
//			break;
//		}
//		sum += arr[i];
//		count++;
//		
//	}
//	cout << sum / count << endl;
//	cin.get();
//	return 0;
//}
//#include<iostream>
//const int Max = 10;
//
//int main()
//{
//	using namespace std;
//	//get data
//	double donation[Max];
//	cout << "Please enter the donation.\n";
//	cout << "You may enter up to " << Max
//		<< " donation.\n";
//	cout << "donation #1: ";
//
//	int i = 0;
//	while (i < Max && cin >> donation[i])
//	{
//		if (++i < Max)
//			cout << "donation #" << i + 1 << ": ";
//
//	}
//	//calculate average 
//	double total = 0.0;
//	double average;
//	int j, n = 0;
//	for (j = 0; j < i; j++)
//		total += donation[j];
//	average = total / i;
//	//calculate number(>average)    
//	for (j = 0; j < i; j++){
//		if (donation[j] > average)
//			n++;
//	}
//	cin.get();
//	//report results    
//	if (i == 0)
//		cout << "No donation.\n";
//	else{
//		if (i == 1){
//			cout << "average = " << average;
//			cout << "No donations bigger than average.\n";
//		}
//		else{
//			cout << "Average of " << i << " donations = " << average << endl;
//			cout << n << " donations bigger than average." << endl;
//		}
//
//	}
//	cout << "Done.\n";
//	cin.get();
//	return 0;
//}

//Ex6.3
//void menu(void)
//{
//	cout << "Please enter one of the following choices:\n";
//	cout << "c) carnivore\t"<<"p) pianist\n";
//	cout << "t) tree" <<"\t"<< "\tg) game\n";
//
//}
//int main()
//{
//	char ch;
//	menu();
//	while (cin >> ch)
//	{
//		switch (ch)
//		{
//		case 'c':
//			cout << "asa" << endl;
//			break;
//		case 'p':
//			cout << "cz" << endl;
//			break;
//		case 't':
//			cout << "caef" << endl;
//			break;
//		case 'g':
//			cout << "A maple is a tree" << endl;
//			break;
//		}
//	}
//	cin.get();
//	return 0;
//}

//int main()
//{
//	cout << "aaca\t" << endl;
//	cin.get();
//	return 0;
//}

//Ex6.4
//const int strsize = 50;
//const int num = 5;
//struct bop
//{
//	char fullname[strsize];
//	char title[strsize];
//	char bopname[strsize];
//	int preference;
//};
//void display_fallname(bop *array, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i].fullname << endl;
//	}
//}
//void dispaly_title(bop *array, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i].title << endl;
//	}
//}
//void dispaly_bopname(bop *array, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i].bopname << endl;
//	}
//}
//void dispaly_preference(bop *array, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i].preference == 0)
//		{
//			cout << array[i].fullname << endl;
//		}
//		else if (array[i].preference == 1)
//		{
//			cout << array[i].title << endl;
//		}
//		else if (array[i].preference == 2)
//		{
//			cout << array[i].bopname << endl;
//		}
//		else
//			;
//	}
//}
//int main()
//{
//	bop arr[num]=
//	{
//		{ "Wimp Macho", "YYY", "Y----", 0 },
//		{ "XXXXXXXX", "2XXXX", "3XXXXX", 1 },
//		{ "AAAAAAAA", "2AAAA", "3AAAAA", 2 },
//		{ "BBBBBBBB", "2BBBB", "3BBBBB", 0 },
//		{ "CCCCCCCC", "4CCCC", "3CCCCC", 1 }
//	};
//	char ch;
//	cout << "Enter your choice:\n";
//	while (cin >> ch)
//	{
//		if ('q'==ch)
//		{
//			break;
//		}
//		switch (ch)
//		{
//		case 'a':
//			display_fallname(arr, num);
//			cin.get();
//			break;
//		case 'b':
//			dispaly_title(arr,num);
//			break;
//		case 'c':
//			dispaly_bopname(arr,num);
//			break;
//		case 'd':
//			dispaly_preference(arr,num);
//			break;
//		default:
//			break;
//		
//		}
//	}
//	cin.get();
//	return 0;
//}

//Ex5.5
//double tvarps1(double meony)
//{
//	return 0;
//}
//double tvarps2(double meony)
//{
//	return 0+10000*0.10;
//}
//double tvarps3(double meony)
//{
//	return 0 + 10000 * 0.10+20000*0.15;
//}
//double tvarps4(double meony)
//{
//	return 0 + 10000 * 0.10 + 20000 * 0.15+3000*0.20;
//}
//int main()
//{
//	double meony = 0;
//	cout << "Enter your tvarps number:";
//	while ((cin >> meony)&&meony>0)
//	{
//		if (meony <= 5000)
//		{
//			cout << tvarps1(meony) << endl;
//		}
//		else if (meony >= 5001 && meony <= 15000)
//		{
//			cout << tvarps2(meony) << endl;
//		}
//		else if (meony >= 15001 && meony <= 35000)
//		{
//			cout << tvarps3(meony) << endl;
//		}
//		else if (meony > 35000)
//		{
//			cout << tvarps4(meony) << endl;
//		}
//		else
//			;
//	}
//	cin.get();
//	return 0;
//}

//Ex5.6
//struct People
//{
//	string name;
//	double meony;
//};
//int main()
//{
//	int num=0;
//	cout << "Enter peoples:\n";
//	cin >> num;
//	People *pt = new People[num];
//	for (int i = 0; i < num; i++)
//	{
//		cin >> pt[i].name;
//		cin >> pt[i].meony;
//	}
//	cin.get();
//	cout << "Grand Patrons:";
//	for (int i = 0; i < num; i++)
//	{
//		
//		
//		if (pt[i].meony>1000)
//		{
//			cout << pt[i].name << endl;
//		}
//	}
//	cout << "otheas Patrons:";
//	for (int i = 0; i < num; i++)
//	{
//		
//		if (pt[i].meony<1000)
//		{
//			cout << pt[i].name << endl;
//		}
//	}
//	cin.get();
//	return 0;
//}

//Ex5.7
//int main()
//{
//	string input;
//	int vowels = 0;
//	int consonats = 0;
//	int others = 0;
//
//	cout << "Enter words (q to quit):";
//	while (cin >> input)
//	{
//		if (input[0] == 'q')
//		{
//			break;
//		}
//		if (isalpha(input[0]))
//		{
//			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'o' || input[0] == 'i' || input[0] == 'u')
//			{
//				vowels++;
//			}
//			else
//			{
//				consonats++;
//			}
//		}
//		else
//			others++;
//	}
//	cin.get();
//
//	cout << vowels << endl;
//	cout << consonats << endl;
//	cout << others << endl;
//	cin.get();
//	return 0;
//}

//int main()
//{
//	unsigned int vowels = 0;
//	unsigned int consonants = 0;
//	unsigned int others = 0;
//	string input;
//
//	cout << "Enter words (q to quit): " << endl;
//
//	while ((cin >> input))
//	{
//		if (input.length() == 1 && input[0] == 'q')
//		{
//			break;
//		}
//
//		if (isalpha(input[0]))
//		{
//			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
//			{
//				vowels++;
//			}
//			else
//				consonants++;
//		}
//		else
//			others++;
//		cin.get();
//	}
//	cin.get();
//	cout << vowels << " words beginning with vowels" << endl;
//	cout << consonants << " words beginning with consonants" << endl;
//	cout << others << " otners" << endl;
//	cin.get();
//	return 0;
//}

//Ex6.8
//const int SIZE = 50;
//int main()
//{
//	ifstream File;
//	
//	char filename[SIZE];
//	cin.getline(filename, SIZE);
//	File.open(filename);	//指出打开那个文件
//	if (!File.is_open())
//	{
//		cout << "error!\n";
//		exit(EXIT_FAILURE);
//	}
//	int sum = 0;
//	char ch = 0;
//	while ((ch=File.get())!=EOF)	//将文件当作输入流用get()方法给ch并与EOF相比
//	{
//		sum++;
//	}
//	cout <<sum<< endl;
//	cin.get();
//	return 0;
//}

//int main(void)
//{
//	string FileName;
//	ifstream inFile;
//	unsigned int num = 0;
//	char ch = 0;
//
//	cout << "Enter the file name:";
//	getline(cin, FileName);
//
//	inFile.open(FileName.c_str());
//
//	while ((ch = inFile.get()) != EOF)
//	{
//		num++;
//	}
//	cout << FileName << endl;
//	cout << "There are " << num << " characters in " << FileName << " file." << endl;
//	cin.get();
//	return 0;
//}


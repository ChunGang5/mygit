#include<stdio.h>
#include<iostream>
int Add(int left, int right);
using namespace std;
#define max 200
int main()
{
	int a = 10;
	//int &c = NULL;	
	int &b = a;
	int c = a;
	++c;
	cout << a << endl;
	cout << max << endl;
	cin.get();
	return 0;
}
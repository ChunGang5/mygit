#include<iostream>
using namespace std;
int main()
{
	int* p1 = new int;
	int* p2 = new int[10];
	delete p1;
	delete[] p2;
	system("pause");
}

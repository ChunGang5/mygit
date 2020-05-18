#include<iostream>
using namespace std;
//double Add(double a, double b)
//{
//	return a + b;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
extern "C" int Add(int a, int b);
int main()
{
	//二义性，编译器不通过
	//Add(1.0, 1);
	//Add(1.0, 1); 
	Add(1,2);
	cin.get();
	return 0;
}
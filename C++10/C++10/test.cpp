#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
//#define max 200
//int main()
//{
//	int a = 10;
//	//int &c = NULL;	
//	int &b = a;
//	int c = a;
//	++c;
//	cout << a << endl;
//	cout << max << endl;
//	cin.get();
//	return 0;
//}

//template<typename T>
//void sawp(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//template<typename D>
//D ADD(const D& a, const D& b)
//{
//	return (a + b);
//}
//int main()
//{
//	int a = 2, b = 5;
//	double c = 1.2, d = 5.3;
//	/*sawp(a, b);
//	sawp<double>(c, d);*/
//	cout << a << b << endl;
//	cout << a << d << endl;
//	
//	ADD<int>(a, d);
//	cin.get();
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//	Add(a, (int)d);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//	// 显式实例化
//	Add<int>(a, b);
//	return 0;
//}

//template<class T>
//class A
//{
//public:
//
//private:
//
//};
//template<typename T>
//void ADD(T a, int n = 10)
//{
//
//}
//template<typename T>
//bool IsEqual(char*& left, char*& right)
//{
//	if (strcmp(left, right) > 0)
//		return true;
//	return false;
//}
//int main()
//{
//	/*A<int> v;*/
//
//
//}

//class Peason
//{
//public:
//	//默认构造函数无参、全缺省、编译器自动生成
//	/*Peason()
//	{
//		_name = "chengang";
//		_age = 20;
//	}*/
//	/*Peason(int age = 21, string name = "lkc")
//	{
//		_age = age;
//		_name = name;
//	}*/
//	Peason(int age, string name)
//	{
//		_age = age;
//		_name = name;
//	}
//	void Print()
//	{
//		cout << _age << endl;
//		cout << _name << endl;
//	}
//	~Peason()
//	{
//
//	}
//private:
//	int _age;
//	string _name;
//};
//class Student :public Peason
//{
//protected:
//	int _stuage;
//	string _stuname;
//};
//int main()
//{
//	Peason s1(20, "chengang");
//	s1.Print();
//	Student s2(20, "ghj");
//	cin.get();
//	return 0;
//}

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//// 继承后父类的Person的成员（成员函数+成员变量）都会变成子类的一部分。这里体现出了Student和
////Teacher复用了Person的成员。下面我们使用监视窗口查看Student和Teacher对象，可以看到变量的复用。调用
////Print可以看到成员函数的复用。
//class Student : public Person
//{
//protected:
//	int _stuid; // 学号
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // 工号
//};
//int main()
//{
//	Student s;
//	Teacher t;
//	s.Print();
//	t.Print();
//	cin.get();
//	return 0;
//}

//class A
//{
//public:
//	int a;
//};
//class C
//{
//public:
//	int a;
//};
//class B :public A,public C
//{
//public:
//	int c;
//};
//int main()
//{
//	A S;
//	B K;
//	K.A::a = 2;
//
//
//	cout << K.A::a << endl;
//	cin.get();
//	return 0;
//}
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
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
//	Add(a1, d1);
//	*/
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
//	Add(a, (int)d);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//	// ��ʽʵ����
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
//	//Ĭ�Ϲ��캯���޲Ρ�ȫȱʡ���������Զ�����
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
//	string _name = "peter"; // ����
//	int _age = 18; // ����
//};
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���Student��
////Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿��Կ��������ĸ��á�����
////Print���Կ�����Ա�����ĸ��á�
//class Student : public Person
//{
//protected:
//	int _stuid; // ѧ��
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
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
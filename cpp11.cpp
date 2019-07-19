#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;


int main()
{
	//1.nullptrͳһ��ʼ��ָ��
	int *p1 = nullptr;
	int *p2 = NULL;
	
	//2.using�������ͱ������൱��typedef
	using myint = int;
	typedef int yourint;
	//3.ͳһ�Ĵ����ų�ʼ��
	myint a = { 10 };
	yourint b = { 10 };
	cout << a << endl;
	cout << b << endl;
	
	//4.lambda���ʽ
	auto f = [a, b]() ->int {cout << "a, b: " << a << " " << b << endl; return 0; };
	f();
	cout << "f() type: " << typeid(f).name() << endl;

	//5.auto��decltype
	auto auto1 = 1;
	cout <<"auto1: "<<auto1<< "  type: " << typeid(auto1).name() << endl;
	auto auto2 = 'a';
	cout << "auto2: " << auto2 << "  type: " << typeid(auto2).name() << endl;
	auto auto3 = "abc";
	cout << "auto3: " << auto3 << "  type: " << typeid(auto3).name() << endl;
	auto auto4 = 10.1;
	cout << "auto4: " << auto4 << "  type: " << typeid(auto4).name() << endl;

	decltype(auto1) decl1;
	cout << "decltype(auto1) decl1 type: " << typeid(decl1).name() << endl;
	decltype(auto2) decl2;
	cout << "decltype(auto2) decl2 type: " << typeid(decl2).name() << endl;
	decltype(auto3) decl3;
	cout << "decltype(auto3) decl3 type: " << typeid(decl3).name() << endl;
	decltype(auto4) decl4;
	cout << "decltype(auto4) decl4 type: " << typeid(decl4).name() << endl;

	//6.����forѭ��
	string s("hello world!!!");
	for (auto c : s)
	{
		cout << c;
	}
	cout << endl;
	return 0;
}
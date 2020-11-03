#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}

	void Show()
	{
		cout << "Show()" << endl;
	}
private:
	int _a;
};
int main()
{
	A* p = NULL;
	p->PrintA();
	p->Show();
	return 0;
}
/*
class A1 {
public:
		void f1(){}
private:
	int _a;
	char _c;
	int _b;
};
class A2 {
public:
	void f2() {}
	short _d;
	void f3(){}
	double _e;

};
class A3
{
	int _f;
	char _g;
};
int main()
{
	cout << sizeof(A1) << sizeof(A2) << sizeof(A3) << endl;
	return 0;
}
/*
class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
};
// 这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " "<<_gender << endl;
}
/*
int main()
{
	int array[] = { 1, 2, 3, 4, 5 };
	//for (auto& e : array)
		//e *= 2;
	for (auto e : array)
		cout << e << " ";
	cout << sizeof(nullptr) << ',' << sizeof(void*) << endl;
	return 0;

}
/*
int& Add(int a, int b) {
	int c = a + b;
	return c;
}
int main()
{
	int& ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1, 2) is :" << ret << endl;//7
	return 0;
}

int main()
{
	const int a = 10;
	const int& ra = a;
}
*/
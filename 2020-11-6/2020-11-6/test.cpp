#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{}
	A(int b)
	{}
	A(int c, int d, int e) :_x(c), _y(d), _z(e)
	{}
private:
	int _x;
	int _y;
	int _z;
};
class B
{
public:
	B(int a, int b, int c) :day(a), month(b), year(c)
	{}
private:
	A day;
	const int month;
	int & year;
};
int main()
{
	A a;
	A b();
	A c(1,2,3);
}
/*
class Test
{
public:
	int tmp;
	Test(int a, int b) : _c(a), _d(b)
	{}
private:
	const int _c;
	int& _d;
};
class B
{
	B(Test a) : _s(a)
	{}
private:
	Test _s;
};

int main()
{
	B s();
	Test t();
}
*/
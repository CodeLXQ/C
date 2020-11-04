#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	int _a;
	int _b;
	A()
	{}
	A(int a,int b)
	{
		_a = a;
		_b = b;
	}
};
A operator+(const A& c, const A& d)
{
	return A(c._a + c._b,d._a + d._b);
}
int main()
{
	A c(1,2);//调用带参构造函数
	A d(3,4);
	A e = c + d;
	cout << c._a << "," << c._b << endl;
	return 0;
}
/*
class NUM
{
public:
	int a, b;
	NUM(int c = 1, int d = 2) : a(c), b(d) 
	{}
	NUM operator - (const NUM & c);
};
NUM operator + (const NUM & e, const NUM & f)
{
	return NUM(e.a + f.a, e.b + f.b); //返回一个临时对象
}
NUM NUM::operator - (const NUM & g)
{
	return NUM(a - g.a, b - g.b); //返回一个临时对象
}
int main()
{
	NUM e(4, 4);
	NUM f(1, 1);
	NUM x;
	x = e + f; //等价于 c = operator + (e,f);
	cout << x.a << "," << x.b << endl;
	cout << (e - f).a << "," << (e - f).b << endl; //e-f等价于e.operator - (f)
	return 0;
}
/*
class Date
{
public:
	void Display()
	{
		display();//非const成员函数调用const成员函数
		cout << "Display ()" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl << endl;
	}
	void display() const
	{
		Display();//const成员函数调用非const成员函数   X
		cout << "Display () const" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl << endl;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
void main()
{
	Date d1;
	d1.Display();//非const对象调用非const成员函数
	d1.display();//非const对象调用const成员函数
	const Date d2;
	d2.Display();//const对象调用非const成员函数    X
	d2.display();//const对象调用const成员函数
}
/*
class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	
    Date(int year = 1900, int month = 1, int day = 1)
	{
			_year = year;
			_month = month;
			_day = day;
		}
private:
	int _year;
	int _month;
	int _day;
};
// 以下测试函数能通过编译吗？
void main()
{
	Date d1;
}
/*
class Date
{
public:
	void Love()
	{
		cout << "love" << endl;
	}
/*
	      // 如果用户显式定义了构造函数，编译器将不再生成
		     Date (int year, int month, int day)
			 {
			 _year = year;
			 _month = month;
			 _day = day;
			 }

private:
	int _year;
	int _month;
	int _day;
};
void main()
{
	// 没有定义构造函数，对象也可以创建成
	Date d;
	d.Love();
}
/*
class Date
{
public:
// 1.无参构造函数
   Date()
   {}

// 2.带参构造函数
Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	cout << year << month << day << endl;
}
private:
	int _year;
	int _month;
	int _day;
};
void main()
{
	Date d1; // 调用无参构造函数
	Date d2(2015, 1, 1); // 调用带参的构造函数

	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
	Date d3();
}
*/
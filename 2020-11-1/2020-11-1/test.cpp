#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 0;
	//int& ra;   // 该条语句编译时会出错
	int& ra = a;
	int& ra = b;
	int& rra = a;
	printf("%p %p %p\n", &a, &ra, &rra);
	return 0;
}
/*
void TestFunc(int b) {
	cout << "void TestFunc(double)" <<b<< endl;
}
void TestFunc(int a) {
	cout << "void TestFunc(int)" <<a<< endl;
}
int main()
{
	TestFunc(0);
	return 0;
}
/*
extern "C" int Add(int left, int right);
double Add(double left, double right);
extern "C" int Add(int left, int right)
{
	return left + right;
}
double Add(double left, double right)
{
	return left + right;
}
int main()
{
	Add(1, 2);
	Add(1.0, 2.0);
	return 0;
}
/*
int Add(int left, int right) {
	return left + right;
}
double Add(double left, double right) {
	return left + right;
}
long Add(long left, long right) {
	return left + right;
}
int main()
{
	cout<<Add(10, 20)<<endl;
	cout<<Add(10.0, 20.0)<<endl;
	cout<<Add(10L, 20L)<<endl;
	return 0;
}
/*
namespace N
{
	int a = 5;
	int b = 7;
}
namespace X
{
	int fun(int a, int b)
	{
		return a + b;
	}
}
namespace X
{
	void fun1()
	{
		std::cout << "hello c++"<<std::endl;
	}
}
int FUN(int a, int b, int c,int d = 2);  //函数声明不能再传一次参
int FUN(int a,int b = 1,int c = 3,int d)
{
	cout <<a<<','<<b<<','<<c<<','<<d<< endl;
	return a + b + c + d;
}
int main()
{
	cout<<  FUN(10,5,8,2) <<endl;//传了参则按传的值来
	cout << FUN(3,2,1) << endl;//参数列表从左往右依次赋值，没有的则按参数列表来。
	return 0;
}
/*
using namespace X;
using namespace N;

using N::a;
using N::b;
using X::fun;
using X::fun1;

int main()
{
	int i;
	cin >> i;
	fun1();
	int C = fun(a, b);
	cout << C << endl;
	return 0;
}
*/

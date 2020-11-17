#include<iostream>
using namespace std;
class Test
{
public:
	Test(int a = 1, int b = 2) : _a(a), _b(b)
	{}
private:
	int _a;
	int _b;
};
class Test1
{
public:
	int i;
	Test1(int c, int d, int e) :_c(c), _d(d), _e(e)
	{}
	int init(int i = 0)
	{
		int& i = _e;
	}
private:
	const int _c;
	Test _d;
	int& _e;
};
int main()
{
	Test t;
	Test1 t1 = t2;
	cout<<t1.
}
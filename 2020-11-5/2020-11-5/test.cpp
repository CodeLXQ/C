#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class test
{
public:
	int _a;
	int _b;
	test(int a, int b)
	{
		_a = a;
		_b = b;
	}
	test(double c = 2.5, double d = 3.5) : _c(c), _d(d)
	{}
	test operator=(test& h)
	{
		return test(this->_a = h._c, this->_b = h._d);
	}
	test operator+(const test& g)
	{
		return test(this->_a + this ->_b,g._a + g._b);
	}
	friend test operator-(const test& e,const test& f)
	{
		return test(e._a - f._a,e._b - f._b);
	}
private:
	double _c;
	double _d;

};
test operator*(const test& c, const test& d)
{
	return test(c._a * d._a,c._b * d._b);
}
int main()
{
	test A(1, 2);
	test B(4, 5);
	test C = A * B;
	test E = A - B;
	test F = A + B;
	cout << "乘法：" <<C._a << "," << C._b << endl;
	cout << "减法：" <<E._a << "," << E._b << endl;
	cout << "加法：" <<F._a << "," << F._b << endl;
	A = B;
	cout << "赋值: " <<A._a << "," << A._b << endl;
	return 0;
}
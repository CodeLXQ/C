#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(){
	int s = 0, n;
	for (n= 0; n < 4; n++){
		switch (n){
		case 1:s += 1;
		default:s += 4;
		case 2:s += 2;
		case 3:s += 3;
		
		}

	}
	printf("%d\n", s);
	return 0;
}
/*
int main()
{
	char a[] = { 'g', 'o', 'o', 'd', '!' };
	char b[] = "good!";
	char *c = "good!";
	char d[8] = { 'g', 'o', 'o', 'd', '!' };
	printf("%d,", a[0]);
	printf("%d,", b);
	printf("%d,", strlen(c));
	printf("%d,", strlen(d));
	return 0;
}
*/
/*
int main()
{
	int x = 4;
	printf("%d", (x += x *= x + x));
	return 0;
}
/*
int main()
{
	double a = 8;
	printf("%lf", a);
	return 0;
}
/*
#define N 3
#define Y(n) ((N+1)*n)
int main()
{
	char a = -131;
	int z = 2 * (N + Y(5 + 1));
	printf("%d,%c", z,a);
	return 0;
}
/*
int main()
{
	int a = 10;
	long long t = sizeof(a++);
	printf("%d,%ld", a,t);
	return 0;
}
/*
int main()
{
	int x = 0,y = 0,z = 0;
	z = (y = 2) && (x == 1);
	printf("%d,%d", y,z);
}
/*
void f(int b[][3])
{
	++b;
	b[1][1] = 9;
}
int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	f(a);
	printf("%d", a[2][1]);
	return 0;
}
/*
int main()
{
	char *a = "abcde";
	a += 2;
	printf("%p\n", a);
	printf("%lu", a);
	return 0;
}
/*
int main()
{
	unsigned short a = 0;
	a--;
	printf("%d", a);
	return 0;
}
/*
int main()
{
	char ch;
	unsigned long p[] = { 6, 7, 8, 9, 10 };
	unsigned long *a;
	a = p;
	*(a + 2) += 2;
	printf("%d,%d\n", *a, *(a + 2));
	printf("%c", 'B' + '8' - '3');
	return 0;
}
/*
int main()
{
	int i;
	char str[10] = "ABCDEFG";
	char *p1, *p2;
	p1 = "abcd", p2 = "efgh";
	strcpy(str + 1, p2 + 1);
	strcpy(str + 3, p1 + 3);
	//printf("%s\n", str);
	//printf("%c\n", str[6]);
	//printf("%d\n",strlen(str));
	printf("%s\n", str);
	return 0;
}
/*
int main()
{
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++)
	{
		switch (i / j)
		{
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	return 0;
}

/*
int main()
{
	int x = 1, y = 012;
	printf("%d,", y);
	printf("%d", y*x++);
	return 0;
}
/*
int main()
{
	unsigned int a = 0xFfFfFfE7;
	unsigned char i = (unsigned char)a;
	char *b = (char *)&a;
	printf("%08x,%08x", i, *b);
	return 0;
}
*/
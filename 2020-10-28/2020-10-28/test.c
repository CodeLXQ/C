#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	union X
	{
		int x;
		char y[4];
	}a;
	a.x = 0x11223344;
	printf("%x,%x,%x,%x", a.y[0], a.y[1], a.y[2], a.y[3]);
	return 0;
}
/*
int main()
{
	const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	printf("%d,%d", i, *j);
	return 0;
}
*/
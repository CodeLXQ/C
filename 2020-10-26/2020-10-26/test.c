#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int *a;
	int *b;
	int i = 0;
	a = &i;
	b = a;
	//b = **a;编译不通过
	//b = &a;随机数
	//b = *a;报错
	printf("%d,", *a);
	printf("%d", *b);
	return 0;
}
/*
int main()
{
	int c[] = {1,3,5,8,10};
	int *p = c + 1;
	printf("%d", *p);//3
	printf("%d", *++p);//5
	//printf("%d", *p++);//5
	printf("%d", ++*p);//9
	return 0;
}
*/
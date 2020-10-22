#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
int a = 5;
if (a = 0){//if里判断是否为0
printf("%d", a - 10);
}
else
{
printf("%d", a++);
}
return 0;
}
/*
unsigned long b = 0;
void a(int* c[1])
{
c[0] = 0x01;
return;
}
void main()
{
int *p[1] = { 0 };
a(p);
printf("%d", *p);
return 0;
}
/*
int main()
{
char arr[2][4];
strcpy((char*)arr, "you");
strcpy(arr[1], "me");
arr[0][3] = '&';
printf("%s", arr);
return 0;
}
/*
int f(int a)
{
int b = 0;
static int c = 3;
a = c++, b++;//b不赋给a
return(a);
}
int main()
{
int a = 2, i, k;
for (i = 0; i < 2; i++)
{
k = f(a++);
}
printf("%d", k);
return 0;
}
*/
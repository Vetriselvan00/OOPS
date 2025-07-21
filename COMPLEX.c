#include<stdio.h>
struct complex {
float img;
float real;
}; 
struct complex c1,c2,c3;
int main()
{
int a,b;
c1.real = 10;
c2.real = 2;
c1.img = 5;
c2.img = 8;
a = c1.real + c2.real;
b = c1.img + c2.img;
printf("%d + i %d",a,b);
}

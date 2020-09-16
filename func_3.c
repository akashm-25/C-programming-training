#include<stdio.h>
int main()
{
int a,b,e;
scanf("%d%d",a,b);
e=swap(a,b);
}
swap(int a,int b)
{
int c=0;
c=a;
a=b;
b=c;
printf("%d%d",a,b);
}








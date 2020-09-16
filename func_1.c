#include<stdio.h>
int main()
{
int a,b,e,sum=0;
scanf("%d%d",&a,&b);
e=add(&a,&b);
printf("sum=%d",e);
}
add(int *a,int *b)
{
int sum=0;
sum=*a+*b;
return sum;
}

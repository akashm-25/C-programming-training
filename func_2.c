#include<stdio.h>
int main()
{
int a,b,sum=0,e;
scanf("%d",&a);
e=squ(&a);
printf("squ=%d",e);
}
squ(int *a)
{
int squ=0;
squ = *a * *a;
return squ;
}

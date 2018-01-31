#include<stdio.h>
void main()
{
int i,n,a;
printf("enter the value\n");
scanf("%d",&i);
printf("enter the value\n");
scanf("%d",&n);
a=i*n;
if((a/i )&& (a/n)==0)
{
printf("perfect square\n",i);
}
else
{
printf("not perfect square\n");
}
}

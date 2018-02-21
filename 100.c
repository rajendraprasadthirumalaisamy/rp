#include<stdio.h>
 void main()
{
int sum=1, a,n;
printf("enter the number\n");
scanf("%d",&a);
while(a>0)
{
    n=a%10;
    sum =sum*n;
   
    a=a/10;
} printf("the product is %d",sum);
}

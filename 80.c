#include<stdio.h>
void main()
{
int n,n1;
printf("enter the value\n");
scanf("%d",&n);

while(n!=0)
{
    
n1=n%10;
if(n1%2!=0)
{
printf(" the odd number is %d",n1);

}n=n/10;

}

}

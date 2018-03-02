#include<stdio.h>
void main()
{
int an=0,a,n,d,sum=1,i;
printf("Enter the Numbers : \n");
scanf("%d %d %d",&a,&n,&d);
for(i=1;i<n;i++)
{
an = a +(n - 1)*d;
sum=sum+an;
}
printf("%d",sum);
}

#include<stdio.h>
void main()
{
int a[10],i,k=5;
printf("enter the number\n");
for(i=0;i<+k;i++)
{
    scanf("%d",&a);
}
/*for(i=0;i<=k;i++)
{
printf("%d",a[i]);
}*/
printf("print the k th element\n");
for(i=0;i<=k;i++)
if(a[i]==k)
{
    printf("%d",k);
}
}

#include<stdio.h>
void main()
{
    int i,a,sum=0;
    printf("enter the value");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        sum+=i;
        
    }
    printf("%d",sum);
}

#include<stdio.h>
void main()
{
    int i,a;
    printf("enter the number\n");
    scanf("%d",&i);
    while(i!=0)
    {
        a=i%10;
        printf("%d",a);
        i=i/10;
    }
    
}

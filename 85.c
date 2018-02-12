#include<stdio.h>
void main()
{
    char a[21];
    int i;
    printf("enter the string\n");
    scanf("%s",a);
    for(i=0;a[i]='\0';i++)
    {
    if(i%2==0)
    {
        printf("%s",a[i]);
    }
    else
    {
        printf("%s",a[i]);
    }
}
}

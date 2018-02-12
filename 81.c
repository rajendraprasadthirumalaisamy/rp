#include<stdio.h>
void main()
{
int kabali=0,n,diff,i;
printf("\nEnter the Number of Opponents :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
kabali=kabali+i;
}
printf("%d\n",kabali);
diff=n-kabali;
if(diff>0)
{
printf("Kabali should not go for Fight");
}
else
{
printf("Kabali can go for Fight");
}
}

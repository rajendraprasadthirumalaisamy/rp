#include<stdio.h>
void main()
{
int l,b,h,area,volume;
printf("enter the length\n");
scanf("%d",&l);
printf("enter the breath\n");
scanf("%d",&b);
printf("enter the height\n");
scanf("%d",&h);
area=(2*l*b)+(2*l*h)+(2*b*h);
printf("the area is %d\n",area);
volume=l*b*h;
printf("the volume is %d\n",volume);
}

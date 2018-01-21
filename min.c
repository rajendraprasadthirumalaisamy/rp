#include<stdio.h>
int main()
{
	int a[10],i,min;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(j=i-1;j<10;j++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
}

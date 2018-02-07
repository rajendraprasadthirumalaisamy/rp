#include <stdio.h>
#include<string.h>
void main() 
{
	char a[10];
	int n,i,b,c;
	scanf("%s",a);
	n=strlen(a);
	b=n%2;
	c=n/2;
	if(b==0)
	{
		 a[c]='*';
		 a[c-1]='*';
		 printf("%s",a);
	}
	else
	{
		a[c]='*';
		printf("%s",a);
	}

}

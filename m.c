#include<stdio.h>
void main()


{
        int a=10,b=11,c=12;
 
	
		if( b>a && a>c || c>a && a>b )
		{
			printf("a is middle number");
		}
 
      
		if( a>b && b>c || c>b && b>a )
		{
			printf("b is middle number");
		}
 
		if( a>c && c>b || b>c && c>a )
		{
			printf("c is middle number");
		}
		
 
	}

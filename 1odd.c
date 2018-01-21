#include <stdio.h>
 
int main()
{
   int n1,n;
 
   printf("Enter an integer\n");
   scanf("%d", &n1);
 n=n1+n1;
   if (n%2 == 0)
      printf("Even\n");
   else
      printf("Odd\n");
 
   return 0;
}

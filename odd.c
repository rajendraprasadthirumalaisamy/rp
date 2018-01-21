#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   if (n%2 == 0)
      printf("Even%d,%d\n",n+2,n-2);
   else
      printf("Odd%d,%d\n",n-2,n+2);
 
   return 0;
}

#include <stdio.h>
 
int main()
{
   int,n;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   if (n%2 != 0)
      printf("prime\n");
   else
      printf("not prime\n");
 
   return 0;
}

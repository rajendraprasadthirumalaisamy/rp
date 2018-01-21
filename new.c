#include <stdio.h>
 
int main()
{
   int n,n1;
 
   printf("Enter an integer\n");
   scanf("%d", &n1);
 n=n1*n1;
 printf("%d",n);
 
   if (n%2 == 0)
      printf("Even\n%d",n);
   else
      printf("Odd%d\n",n);
 
   return 0;
}

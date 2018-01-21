#include <stdio.h>
void main() {
    int a =10;
    int b = 20;
    printf(" value of a=%d b=%d before swapping", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^b;
    printf("value of a=%d b=%d after swapping", a, b);

  
}

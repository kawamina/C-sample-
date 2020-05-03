#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 8;
    printf("x is %d\n", x);

    x = 24;
    printf("x is %d\n", x);

    int *aptr = &x;

    printf("aptr is %x\n", aptr);

    printf("x is %d\n", *aptr);

    *aptr = 100;

     printf("x is %d %d\n", x, *aptr);

}

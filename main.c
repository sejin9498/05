#include <stdio.h>

int main(void)
{
    int a;

    printf("Input an integer:"); 
    scanf("%i", &a);

    if (a>0)
       printf("Absolute value : %d!\n", a);
    else
       printf("Absolute value : %d!\n", -a);

    return 0;
}
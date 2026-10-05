#include <stdio.h>

int main(void)
{
    int a, b;
    char op;
    int c;

    printf("Input the calculation:" );
    scanf("%i%c%i", &a, &op, &b);

    if(op == '+')
        c= a+b;
    else if(op == '-')
        c= a-b;
    else if(op == '*')
        c= a*b;
    else if(op == '/')
        c= a/b;

    printf("= %i\n", c);
    return 0;
}
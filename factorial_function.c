#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    printf("Factorial = %d", factorial(5));
    return 0;
}

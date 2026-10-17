#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

int main()
{
    float result;

    result = add(10.5, 5.5);

    printf("Sum = %.2f", result);

    return 0;
}

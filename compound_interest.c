#include <stdio.h>

float compoundInterest(float p, float r, float t)
{
    float amount = p;

    for (int i = 1; i <= t; i++)
        amount = amount * (1 + r / 100);

    return amount - p;
}

int main()
{
    printf("Compound Interest = %.2f",
           compoundInterest(1000, 10, 2));

    return 0;
}

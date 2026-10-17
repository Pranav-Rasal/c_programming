#include <stdio.h>

float interest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    printf("Interest = %.2f", interest(1000, 5, 2));

    return 0;
}

#include <stdio.h>

float bill(float units)
{
    if (units <= 100)
        return units * 2;
    else if (units <= 200)
        return 200 + (units - 100) * 3;
    else
        return 500 + (units - 200) * 5;
}

int main()
{
    printf("Bill = Rs. %.2f", bill(250));
    return 0;
}

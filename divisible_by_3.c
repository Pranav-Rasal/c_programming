#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0)
        printf("Divisible by 3");
    else
        printf("Not divisible by 3");

    return 0;
}

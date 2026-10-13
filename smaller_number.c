#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
        printf("%d is smaller", a);
    else
        printf("%d is smaller", b);

    return 0;
}

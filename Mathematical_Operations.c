#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("The sum is %d\n", sum);

    int diff = a - b;
    printf("The difference is %d\n", diff);

    int prod = a * b;
    printf("The product is %d\n", prod);

    float quot = (float) a / b;
    printf("The quotient is %.2f\n", quot);

    return 0;
}

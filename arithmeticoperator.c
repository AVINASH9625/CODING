#include<stdio.h>

int main()
{
    int a, b, sum, difference, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("The difference of %d and %d is %d\n", a, b, difference);
    printf("The product of %d and %d is %d\n", a, b, product);
    printf("The quotient of %d and %d is %f\n", a, b, quotient);

    return 0;
}
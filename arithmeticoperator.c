#include<stdio.h>

int main()
{
    float a, b, sum, difference, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("The sum of %f and %f is %f\n", a, b, sum);
    printf("The difference of %f and %f is %f\n", a, b, difference);
    printf("The product of %f and %f is %f\n", a, b, product);
    printf("The quotient of %f and %f is %f\n", a, b, quotient);

    return 0;
}
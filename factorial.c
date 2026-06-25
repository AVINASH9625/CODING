#include<stdio.h>
int main()
{
    int n,i,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d is: %d\n",n,fact);
    return 0;
}
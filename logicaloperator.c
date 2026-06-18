#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (!(a > 15))
    {
        printf("Condition is false, so NOT makes it true");
    }
    else
    {
        printf("Condition is true, so NOT makes it false");
    }

    return 0;
}
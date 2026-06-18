#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("The value is 1");
        break;
        case 2:
        printf("The value is 2");
        break;
        case 3:
        printf("The value is 3");
        break;
        case 4:
        printf("The value is 4");
        break;
        case 5:
        printf("The value is 5");
        default:
        printf("The value is not between 1 and 5");
    }
    return 0;
}
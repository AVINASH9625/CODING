#include<stdio.h>
int main()
{
    int i=1;
    printf("Enter a number: ");
    scanf("%d",&i);
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=10);
    return 0;
}
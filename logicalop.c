#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if (a > 5 && b > 15) {
        printf("Both conditions are true");
    }
    else{
        printf("At least one condition is false");
    }

    return 0;
}
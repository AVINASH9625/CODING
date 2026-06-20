#include<stdio.h>
int main()
{
    float r, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    volume=(4/3)*3.1415*r*r*r;
    printf("Volume of the sphere = %f\n", volume);
    return 0;

}
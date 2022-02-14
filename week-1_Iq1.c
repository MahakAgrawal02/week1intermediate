#include<stdio.h>
int main()
{
    float x, y;
    printf("Enter temperature in fahrenheit:");
    scanf("%f", &x);
    y = (x - 32) * 5 / 9;
    printf("Temperature in celsius is: %f", y);
    return 0;
}

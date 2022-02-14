#include<stdio.h>
void main()
{
    int x;
    printf("Enter any number:");
    scanf("%d", &x);
    if(x % 5 == 0 && x % 11 == 0)
    printf("%d is divisible both by 5 amd 11", x);
    else
    printf("%d is not divisible by both 5 and 11.", x);
}
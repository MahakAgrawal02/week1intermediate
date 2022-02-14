#include<stdio.h>
void main()
{
    int x, y, z;
    printf("Enter any three number:");
    scanf("%d %d %d", &x, &y, &z);
    if(x > y)
    {
        if(x > z)
        {
            printf("%d is maximum between all three", x);
        }
        else{
            printf("%d is maximum betwen all three", z);
        }
    }
    else
    {
        if(y > z){
            printf("%d is maximum between all three", y);
        }
        else{
            printf("%d is maximum between all", z);
        }
    }
}
#include<stdio.h>
void swap(int, int);
void main()
{
    int a=1, b=2;
    printf("\n In main(), a = %d and b = %d",a, b);
    swap(a, b);
    printf("\n In main(), a = %d and b = %d",a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n In function (Swap) a = %d and b = %d", a, b);
}
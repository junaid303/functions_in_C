#include<stdio.h>
int greater(int a, int b, int c);
int main()
{
    int num1, num2, num3,larger;
    printf("\n Enter A B and C numbers : ");
    scanf("%d %d %d",&num1, &num2, &num3);
    larger = greater(num1,num2,num3);
    printf("\n The largest Number = %d",larger);
    return 0;
}
int greater(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    if(b>a && b>c)
    return b;
    else
    return c;
}
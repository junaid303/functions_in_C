#include<stdio.h>
float cal_area(float r);
int main()
{
    float area, radius;
    printf("Enter r value : ");
    scanf("%f",&radius);
    area = cal_area(radius);
    printf("The Area of circle with %f radius is %f",radius, area);
    return 0;
}
float cal_area(float radius)
{
   return( 3.14 * radius * radius);
}
//program to printf area of circle by using function

#include<stdio.h>

float AreaOfCircle(float fValue)
{
    float fArea = 0.0f;
    fArea = 3.14 * fValue * fValue;
    return fArea;
}

int main()
{
    float fRadius = 0.0f, fResult = 0.0f;

    printf("Enter the radius of circle : ");
    scanf("%f",&fRadius);

    fResult = AreaOfCircle(fRadius);

    printf("Area of circle is : %f",fResult);

    return 0;
}
//program to print area of circle take value of radius from user

#include<stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;
    
    printf("Enter radius of circle : \n");
    scanf("%f",&fRadius);
    
    fArea = 3.14f * fRadius * fRadius;

    printf("Area of circle is : %f",fArea);

    return 0;
    }
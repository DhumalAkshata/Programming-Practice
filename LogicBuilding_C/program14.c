//program to calculate the marks of student(using typecasting)

#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal )
{
    float fPercentage = 0.0f;

    fPercentage = ((float)iObtained/(float)iTotal) * 100;
    return fPercentage;
}
int main()
{
    int iValue1 = 0,iValue2 = 0; 
    float fResult = 0.0f;

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue1);

    printf("Enter total marks : \n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1,iValue2);

    printf("your percentage is : %f",fResult);

    return 0;
}
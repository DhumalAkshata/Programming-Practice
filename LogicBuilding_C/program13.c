//program to calculate the marks of student
/*
Algorithm : 
    START
        Accept the total marks 
        Accept the obtained marks
        Calculate the percentage as (obtained / total) * 100
        Display the calculated percentage
    STOP
*/

#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal )
{
    float fPercentage = 0.0f;

    fPercentage = (iObtained/iTotal) * 100;
    return fPercentage;
}
int main()
{
    int iValue1 = 0,iValue2 = 0, fResult = 0;

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue1);

    printf("Enter total marks : \n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1,iValue2);

    printf("your percentage is : %f",fResult);

    return 0;
}
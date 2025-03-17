/*
    START
        Accept the percentage from user
        If percentage are less than 40 then display FAIL
        And if it is greater than or equal to 40 then display PASS
    STOP
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f || fPercentage > 100.0f)                   //filetr
    {
        printf("Invalid Percentage, please enter the percentage in range 0 to 100\n");
        return;
    }
    if(fPercentage >= 40.00f)
    {
        printf("you are PASS");
    }
    else
    {
        printf("you are FAIL");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter Marks : ");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;
}
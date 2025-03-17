#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage > 100.00f)                   //filetr
    {
        printf("Invalid Percentage, please enter the percentage in range 0 to 100\n");
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
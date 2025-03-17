//program to print jay Ganesh on screen using function take input from user(how mush time print jay ganesh on screen) using for loop


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter frequency : ");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}
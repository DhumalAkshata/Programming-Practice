//take input from user and print factors of that numbers

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}
// Time Complexity : O(N)
//program to print reverse number using for loop using function

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iFrequency = 0;
    printf("Enter frequency: ");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}
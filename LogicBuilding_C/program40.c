//program to print reverse number still 0 using for loop

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 0; iCnt--)
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
//program 10 print 1 to 10 numbers on screen take input from user

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
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
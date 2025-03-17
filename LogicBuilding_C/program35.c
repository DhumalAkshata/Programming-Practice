//program to print number on screen using while loop take input from user and use function Display

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iFrequency = 0;

    printf("Enter frequency : ");
    scanf("%d", &iFrequency);

    Display(iFrequency);

    return 0;
}
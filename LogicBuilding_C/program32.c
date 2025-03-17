//program to print number on screen take input from user (how much number print on screen) using for loop

#include<stdio.h>
int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("Enetr frequency : ");
    scanf("%d",&iFrequency);

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iCnt);
    }

    return 0;
}
//program to print Addition of two numbers take input from user

#include<stdio.h>
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter first number : ");
    scanf("%d",&iNo1);

    printf("Enter second number : ");
    scanf("%d",&iNo2);

    iAns = iNo1 + iNo2;
    printf("Addition of two numbers is : %d",iAns);

    return 0;
}

/*
    %d = int
    %f = float
    %c = character
*/

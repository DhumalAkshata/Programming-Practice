//program to print jay Ganesh on screen take input from user(how mush time print jay ganesh on screen) using for loop 

#include<stdio.h>
int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("Enter frequency : ");
    scanf("%d",&iFrequency);

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

    return 0;
}

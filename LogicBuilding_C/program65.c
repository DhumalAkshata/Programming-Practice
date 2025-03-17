//program to print array element using for loop take array elements from user

#include<stdio.h>
int main()
{
    int Arr[4] ;
    int iCnt = 0;

    printf("Enter Array Elements : ");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Array elements are : ");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
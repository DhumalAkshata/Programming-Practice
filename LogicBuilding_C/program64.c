//program to print array element using for loop take array elements from user

#include<stdio.h>
int main()
{
    int Arr[4] ;
    int iCnt = 0;

    printf("Enter Array Elements : ");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);

    printf("Array elements are : ");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
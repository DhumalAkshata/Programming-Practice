//program to print reverse number

#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit = 0,iReverse = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iReverse;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse number are : %d\n",iRet);

    return 0;
}
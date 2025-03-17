//accept number from user and print sum of its digits

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0,iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //if number is negative convetrt it into positive
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit; 
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enetr number : ");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Sum of digits are : %d\n",iRet);
    return 0;
}
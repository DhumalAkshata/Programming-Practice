//accept number from user and print sum of its even digits

#include<stdio.h>
int SumOfEvenDigits(int iNo)
{
    int iDigit = 0,iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumOfEvenDigits(iValue);
    printf("Sum of even digits are : %d\n",iRet);
    return 0;
}
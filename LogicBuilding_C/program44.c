//take one number from user and check wether it is completely divisible by 3 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    int iCnt = 0;
    iCnt = iNo % 3;
    if(iCnt == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bResult = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bResult = CheckDivisible(iValue);

    if(bResult == true)
    {
        printf("%d is divisible by 3\n",iValue);
    }
    else
    {
        printf("%d is Not divisible by 3\n",iValue);
    }

    return 0;

}
//take one number from user and check it is completely divisible by 3 and 5 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
     
    if((iNo % 3 == 0) && (iNo % 5 == 0))
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
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is Not divisible by 3 and 5\n",iValue);
    }

    return 0;

}

/*
-------------------------------------------------------
    Operand 1       Operand 2       &&          ||
-------------------------------------------------------
    true            true            true        true
    true            false           false       true
    false           true            false       true
    false           false           false       false
-------------------------------------------------------
*/
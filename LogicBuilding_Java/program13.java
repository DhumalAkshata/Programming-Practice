//program to print sum of even factors of number

import java.util.*;

class CalculateFactors
{
    public int EvenFactorsAddition(int iNo)
    {
        int iCnt = 0, iSum = 0;

        if(iNo % 2 != 0)
        {
            return 0;
        }
        
        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt  == 0)
            {
                if(iCnt % 2 == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
        }
        return iSum;
    }
}

class Program12
{
    public static void main(String arg[])
    {
        int iValue = 0, iResult = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        CalculateFactors obj = new CalculateFactors();
        iResult = obj.EvenFactorsAddition(iValue);

        System.out.println("Addition of even factors is : "+iResult);

    }
}
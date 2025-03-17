//Program to take number from user and calculate Multiplication of digit of that number

import java.util.*;

class Number 
{
    public int Multiplication(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}

class Program15
{
    public static void main(String arg[])
    {
        int iValue = 0, iRet = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        Number obj = new Number();
        iRet = obj.Multiplication(iValue);

        System.out.println("Multiplication is : "+iRet);
    }
}
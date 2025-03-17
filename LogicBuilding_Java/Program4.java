//program to print addition of two numbers using function
//Dynamic values logic inside the seperate function in same class

import java.util.*;

class Program4
{
    public static int Addition(int iValue1,int iValue2)
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }

    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sc.nextInt();

        iAns = Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);

    }
}
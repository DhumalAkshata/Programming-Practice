/*program to print addition of two numbers can't write logic in main method 
create different class and create object of that class and call method*/

//Dynamic values logic inside seperate function seperate class

import java.util.*;
class Arithematic
{
    public static int Addition(int iValue1, int iValue2)
    {
        int iResult = 0;

        iResult = iValue1 + iValue2;

        return iResult;
    }
}

class Program5
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter Second number : ");
        iNo2 = sc.nextInt();

        Arithematic obj = new Arithematic();

        iAns = obj.Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);

    }
}
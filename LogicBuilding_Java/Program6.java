/*Dynamic values logic inside seeperate function in seperate class 
with object oriented designing*/

import java.util.*;

class Arithematic
{
    int iValue1 = 0,iValue2 = 0;

    Arithematic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    }

    public int Addition()
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
}
class Program6
{
    public static void main(String arg[])
    {
        int iNo1 = 0,iNo2 = 0, iSum = 0; 

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sc.nextInt();

        Arithematic obj = new Arithematic(iNo1, iNo2);
        iSum = obj.Addition();

        System.out.println("Addition is : "+iSum);

    }
}
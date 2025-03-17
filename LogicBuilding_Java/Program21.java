//program to print number from 1 to 10

import java.util.*;
class One
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println(iCnt);
        }
    }
}

class Program21
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Frequency: ");
        iValue = sc.nextInt();

        One obj = new One();
        obj.Display(iValue);
        
    }
}
//program to print number on screen(take inout from user)

import java.util.*;

class One
{
    public void Number(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println(iCnt);
        }
    }
}

class Program17
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number:");
        iValue = sc.nextInt();

        One obj = new One();
        obj.Number(iValue);

    }
}
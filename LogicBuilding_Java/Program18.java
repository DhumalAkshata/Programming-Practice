//program to print 5 Times Jay Ganesh on screen using while loop

import java.util.*;

class One
{
    public void Number(int iNo)
    {
        int iCnt = 0;
        iCnt = 1;
        
        while(iCnt <= iNo)
        {
            System.out.println(iCnt);
            iCnt++;
        }

    }
}

class Program18
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        One obj = new One();
        obj.Number(iValue);
    }
}
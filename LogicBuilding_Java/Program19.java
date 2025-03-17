//Program to print reverse number on screen using while loop
import java.util.*;

class One
{
    public void Number(int iNo)
    {
        int iCnt = 0;
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class Program19
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
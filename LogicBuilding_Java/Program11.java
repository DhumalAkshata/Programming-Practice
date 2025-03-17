//Program to print power of number
// A = 10   B = 2
// 100

// A = 5   B = 3
// 125

import java.util.*;

class Arithematic
{
    public long Power(int A, int B)
    {
        int iCnt = 0;
        long iMult = 1;

        for(iCnt = 1; iCnt <= B; iCnt++)
        {
            iMult = iMult * A;
        }
        return iMult;
    }

}


class Program11
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0;
        long iAns = 0;

        Scanner sc = new Scanner(System.in);
        {
            System.out.println("Enter Base : ");
            iNo1 = sc.nextInt();

            System.out.println("Enter Index : ");
            iNo2 = sc.nextInt();

            Arithematic obj = new Arithematic();
            iAns = obj.Power(iNo1,iNo2);

            System.out.println("Power of is : "+iAns);
        }
    }
}


/*
    A = 10
    B = 5;

    Ans

    10 * 10 * 10 * 10 * 10

    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    
*/
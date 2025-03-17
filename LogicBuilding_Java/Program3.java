//program to print addition of two numbers using different class
//Dynamic values logic inside main

import java.util.*;

class Program3
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iSum = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter Second Number : ");
        iNo2 = sc.nextInt();

        iSum = iNo1 + iNo2;

        System.out.println("Addition is : "+iSum);
    }
}

/*
    nextInt()          int
    nextFloat()        float
    nextDouble()       double
    nextBoolean()      boolean
    nextLine()         string
*/
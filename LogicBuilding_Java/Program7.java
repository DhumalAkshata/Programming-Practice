//accept obtained marks and total marks from user and display percentage

import java.util.*;

class Calculation
{
    public float CalculatePercentage(int ObtainedMarks, int TotalMarks)
    {
        float fAns = 0.0f;

        fAns = ((float)ObtainedMarks / (float)TotalMarks) * 100;

        return fAns;
    }
}

class Program7
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0; 
        float fResult = 0.0f;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Obtained Marks : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter total marks : ");
        iNo2 = sc.nextInt();

        Calculation obj = new Calculation();
        fResult =  obj.CalculatePercentage(iNo1,iNo2);

        System.out.println("Your percentage is : "+fResult);
    }
}
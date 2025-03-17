import java.util.*;

class Program4
{
    public static int Addition(int A, int B)
    {
        int iResult = 0;
        iResult =  A + B;

        return iResult;
    }
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sc  = new Scanner(System.in);

        System.out.println("Enter first number :");
        iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sc.nextInt();

        iAns = Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);
    }
}
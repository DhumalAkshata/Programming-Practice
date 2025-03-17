import java.util.*;

class Arithematic
{
    public static int Addition(int A, int B)
    {
        int iResult = 0;
        iResult = A + B;

        return iResult;
    }
}

class Program5
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sc.nextInt();

        Arithematic aobj = new Arithematic();
        iAns = aobj.Addition(iNo1, iNo2);

        System.out.println("Addition is : "+iAns);
    }
}
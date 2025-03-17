import java.util.*;

class Program3
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAdd = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sc.nextInt();

        iAdd = iNo1 + iNo2;

        System.out.println("Addition is : "+iAdd);
    }

}

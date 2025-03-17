//program to print 5 times Jay Ganesh on screen
import java.util.*;

class Program16
{
    public static void main(String arg[])
    {
       int iCnt = 0,iNo = 0;
       Scanner sc = new Scanner(System.in);

       System.out.println("Enter number : ");
       iNo = sc.nextInt();

       for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
        System.out.println("Jay Ganesh...");
       }
    }
}
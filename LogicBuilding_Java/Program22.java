//Take one number from user and check wether its completely divisible by 5 or not
import java.util.*;

class One
{
    public boolean Display(int iNo)
    {
        int iCnt = 0;
        iCnt = iNo % 5 == 0;
        if(iCnt == 0)
        {
            return true;
        }
        return false;
    }
}
class Program22
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean iRet = false;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sc.nextInt();

        One obj = new One();
        iRet = obj.Display(iValue);

        if(iRet == true)
        {
            System.out.println("Divisible by 5 ");
        }
        else
        {
            System.out.println("Not divisible by 5");
        }

    }
}
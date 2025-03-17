//program to print number from 1 to 10

class One
{
    public void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iCnt);
        }
    }
}

class Program20
{
    public static void main(String arg[])
    {
        One obj = new One();
        obj.Display();
        
    }
}
//take length and breadth from user and calculate area of rectangle

import java.util.*;

class CalculateArea
{
    public float AreaOfRectangle(int A,int B)
    {
        float fArea = 0.0f;

        fArea = A * B;

        return fArea;
    }
}


class Program8
{
    public static void main(String arg[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fResult = 0.0f;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length of rectangle : ");
        iNo1 = sc.nextInt();

        System.out.println("Enter breadth of rectangle : ");
        iNo2 = sc.nextInt();

        CalculateArea obj = new CalculateArea();
        fResult = obj.AreaOfRectangle(iNo1,iNo2);

        System.out.println("Area of Rectangle is : "+fResult);
    }
}
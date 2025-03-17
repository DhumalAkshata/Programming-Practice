//take length and breadth from user and calculate area of rectangle

import java.util.*;

class CalculateArea
{
    public float AreaOfRectangle(float A,float B)
    {
        float fArea = 0.0f;

        fArea = A * B;

        return fArea;
    }
}

class Program9
{
    public static void main(String arg[])
    {
        float fNo1 = 0, fNo2 = 0;
        float fResult = 0.0f;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length of rectangle : ");
        fNo1 = sc.nextFloat();

        System.out.println("Enter breadth of rectangle : ");
        fNo2 = sc.nextFloat();

        CalculateArea obj = new CalculateArea();
        fResult = obj.AreaOfRectangle(fNo1,fNo2);

        System.out.println("Area of Rectangle is : "+fResult);
    }
}
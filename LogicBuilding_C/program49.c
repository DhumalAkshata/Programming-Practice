//take input from user and print summation of factors of that numbers

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are : \n",iNo);

     /*iNo/2 because A number cannot have any factors 
     larger than half of itself (except the number itself).
     eg : Factors of 12 are 1, 2, 3, 4, 6, 12. All factors except 12 are less than or equal to 6. 
     By limiting the range to iNo/2,
      we reduce unnecessary iterations and make the loop more efficient.
     */

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors : %d\n",iRet);

    return 0;

}
// Time Complexity : O(N)
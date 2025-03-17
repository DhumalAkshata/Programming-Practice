/*
    step1 : understand the problem statement
    step2 : write the algorithm
    step3 : Decide the programming language
    step4 : write the program
    step5 : Test the program
*/

/*
    problem statement :
    write a program which is used to perform ADDITION of two numbers.
    
*/

/*
    step1 : understand the problem statement
    user is going to enter the data in decimal format
    If entered data is negative we have to convert it to positive value
*/

/*
    step2: write the algorithm

    START
        Accept first input
        Accept second input
        If any of the input is negative then convert it into positive
        Perform the addition of that accepted values
        Display the Addition
    STOP

*/

/*
    step 3: Decide the programming language
    According to the problem statement we select c programming.
*/

/*
    step4 : write the program
*/

#include<stdio.h>

int main()
{
    float fNo1 = 0.0f;
    float fNo2 = 0.0f;
    float fAns = 0.0f;

    printf("Enter first Number :\n");
    scanf("%f",&fNo1);

    printf("Enter Second Number : \n");
    scanf("%f",&fNo2);

    fAns = fNo1 + fNo2;
    
    printf("Addition is: %f\n",fAns);

    return 0;
}
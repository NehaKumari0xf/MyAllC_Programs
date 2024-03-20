/*
Binary opearator performs on double operators
like:- Arithmetic, Relational, Logical, botwise, Assignment opearators
*/

#include<stdio.h>
int main()
{
    int num1, num2, sum, sub, multiply;
    float divide;

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);

    //for Arithemeic operator (+, -, *, /, %)
    sum=num1+num2;
    sub=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;

    //for Assignment operartor (+=, -=, *=, /=, %=, =)
    num1+=num2;
    num1-=num2;
    num1*=num2;
    num1/=num2;
    num1%=num2;

    printf("\n\nAddition\n%d + %d = %d",num1,num2,sum);
    printf("\nsubtraction\n%d - %d = %d",num1,num2,sub);
    printf("\nMultiplication\n%d * %d = %d",num1,num2,multiply);
    printf("\nDivison\n%d / %d = %f",num1,num2,divide);

}
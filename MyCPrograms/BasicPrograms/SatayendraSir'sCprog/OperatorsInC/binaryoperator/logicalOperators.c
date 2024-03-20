/*
Binary opearator performs on double operators
like:- Arithmetic, Relational, Logical, botwise, Assignment opearators
*/

#include<stdio.h>
int main()
{
    int num1, num2, and, or;

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);

    //for Logical operator (&&,||)
    and=num1&&num2;
    or=num1||num2;
    
    printf("\n%d && %d = %d",num1,num2,and);
    printf("\n%d || %d = %d",num1,num2,or);

}
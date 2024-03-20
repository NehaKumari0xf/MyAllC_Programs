/*
Binary opearator performs on double operators
like:- Arithmetic, Relational, Logical, botwise, Assignment opearators
*/

#include<stdio.h>
int main()
{
    int num1, num2, _greater_than, _smaller_than, _greaterthan_equalto, _smallerthan_equalto, eequalto,_not_equalto;

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);

    //for Relational operator (+,-,*,/,%)
    _greater_than = num1 < num2;
    _smaller_than = num1 > num2;
    _greaterthan_equalto = num1 <= num2;
    _smallerthan_equalto = num1 >= num2;
    eequalto = num1==num2;
    _not_equalto = num1 != num2;

    printf("\n%d < %d = %d",num1,num2,_greater_than);
    printf("\n%d > %d = %d",num1,num2,_smaller_than);
    printf("\n%d <= %d = %d",num1,num2,_greaterthan_equalto);
    printf("\n%d >= %d = %d",num1,num2,_smallerthan_equalto);
    printf("\n%d == %d = %d",num1,num2,eequalto);
    printf("\n%d != %d = %d",num1,num2,_not_equalto);

}
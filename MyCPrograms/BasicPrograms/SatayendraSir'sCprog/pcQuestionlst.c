
#include<stdio.h>
int main()
{

    int num, rev=0, rem, sumOflstAndLastDigit =0, _sumOf_allDigit =0;
;
;

    printf("Enter any no:");
    scanf("%d",&num);
    
    //code to reverse the n no of digit integer number
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
    rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
    rev = (rev * 10) + num; 

    //code to sum of first and last digit of integer number
/*
    rem = num % 10;
    sumOflstAndLastDigit += rem;
    rem = num /100;
    sumOflstAndLastDigit += rem;
    rem = num % 10;
    sumOflstAndLastDigit += rem;
    rem = num /100;
    sumOflstAndLastDigit += rem;
    rem = num /100;
    sumOflstAndLastDigit += rem; */

    //code to sum of all particular no of digit

    /*rem = num % 10;
    _sumOf_allDigit +=  rem;
    num /= 10;
    rem = num % 10;
    _sumOf_allDigit +=  rem;
    num /= 10;
    rem = num % 10;
    _sumOf_allDigit +=  rem;
    num /= 10;
    _sumOf_allDigit += rem;*/

    printf("\nReverse of five digit integer number is %d",rev);
   // printf("\nAddition of entered number and  reverse of entered number:-\n%d + %d = %d")
   // printf("\nSum of first and last digit of integer number is %d",sumOflstAndLastDigit);
    //printf("\nSum of all particular digit of integer number is %d",_sumOf_allDigit);

    return 0;
}
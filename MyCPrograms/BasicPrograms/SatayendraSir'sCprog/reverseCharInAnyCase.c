#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any alphabet:");
    scanf("%c",&ch);
    
    if(ch>=65 && ch<=90)
    printf("\n'%c' is Upper case \nNow it's become into in '%'c Lower case",ch,ch+32);
    else if(ch>=97 && ch<=122)
    printf("\n'%c' is Lower case\nNow it's become into in '%c' Upper case",ch,ch-32);
    else
    ("\nsorry! invalid alpahabet");

    return 0;
}
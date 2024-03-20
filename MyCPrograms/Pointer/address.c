/*C program to print the address of variable*/
#include<stdio.h>
struct Person
{
    char name[30];
    char gender;
};
int main()
{
    int a;
    float b;
    char c;
    double d;
    struct Person p;

    printf("\nAddress of a is:%u",&a);//integer address
    printf("\nAddress of b=%p",&b);//hexadecimal address
    printf("\nAddress of c=%x",&c);//hexadecimal address
    printf("\nAddress of d=%o",&d);//octal address
    printf("\nAddress of p=%u",&p);
    return 0;
}
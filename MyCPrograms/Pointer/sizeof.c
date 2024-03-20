/*
sizeof ->it is a keyword in C used as operator. It gives the size of its operand in memory in bytes.
Syntax:
sizeof(operand)

operand may be a data type ,name of variable or literal
ex:
sizeof(int)
or
int i;
sizeof(i)

or
sizeof(5)
*/
struct Student
{
    char name[30];
    char gender;
    int age;
    int marks[5];
};

#include<stdio.h>
int main()
{
    printf("\n Size of int= %d bytes", sizeof(int));
    printf("\nsize of float=%d bytes ",sizeof(float));
    printf("\nsize of double= %d bytes",sizeof(double));
    printf("\nsize of long double= %d bytes",sizeof(long double));
    printf("\n size of char=%d byte",sizeof(char));
    printf("\nsize of Student=%d bytes",sizeof(struct Student))   ;

    printf("\n\nsize of integer pointer=%d bytes",sizeof(int*));
     printf("\nsize of float pointer=%d bytes ",sizeof(float*));
    printf("\nsize of double pointer= %d bytes",sizeof(double*));
    printf("\nsize of long double pointer= %d bytes",sizeof(long double*));
    printf("\n size of char pointer=%d byte",sizeof(char*));
    printf("\nsize of Student pointer=%d bytes",sizeof(struct Student*))   ;
    return 0;
}
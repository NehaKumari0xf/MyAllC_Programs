//find the size of all datatype

#include<stdio.h>
void main()
{
    int _size_of_integer;
    char _size_of_character;
    float _size_of_float;
    double _size_of_double;

//first way to find the size of all datatype
    printf("_size_of_integer is %d",sizeof(_size_of_integer));
    printf("\n_size_of_character is %d",sizeof(_size_of_character));
    printf("\n_size_of_float is %d",sizeof(_size_of_float));
    printf("\n_size_of_double is %d",sizeof(_size_of_double));
    printf("\n\n");

//Second way to find the size of all datatype
    printf("_size_of_integer is %d",sizeof(int));
    printf("\n_size_of_character is %d",sizeof(char));
    printf("\n_size_of_float is %d",sizeof(float));
    printf("\n_size_of_double is %d",sizeof(double));
    printf("\n\n");

//third way to find the size of all datatype
    printf("_size_of_integer is %d",sizeof(58));
    printf("\n_size_of_character is %d",sizeof('N'));
    printf("\n_size_of_float is %d",sizeof(58.20));
    printf("\n_size_of_double is %d",sizeof(10.2e0));
}
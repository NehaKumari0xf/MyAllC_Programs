#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    int *p;

    //assign address of a in p
    p=&a;// now p is pointing to a
    printf("\nvalue of s=%d",*p);

    //assign address of b in p
    p=&b;//now p is pointing to b
    printf("\nvalue of b=%d",*p);


    //assign address of c in p
    p=&c;//now p is pointing to C
    printf("\nvalue of c=%d",*p);
    return 0;

}
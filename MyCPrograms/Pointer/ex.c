#include<stdio.h>
int main()
{
    int a=10;
    printf("\n Value of first a= %d",a);
    int *p=&a; //now p is pointing to a
    int *pg=NULL;// it will give u 0
    //int *pg; it will give u random symbol which is gv

    printf("\n Value of second a= %d",a);
    printf("\n  address of a= %d",&a);//address of a 
    printf("\n Value of for percentage x a= %x",a);//a=a ntg u get
    printf("\n address of by percentage x p= %x",p);//also by using %p
  //  printf("\n Value of a= %d",*a); error
    printf("\nvalue of pointer a=%d",*p);//data  of a 

    printf("\nvalue of pointer garbage pg=%d",pg);
    printf("\nvalue of pointer garbage  *pg=%d",*pg); 


    *p=20;
    printf("\nnow value of a=%d",*p);
    printf("\nnow value of a=%d",a); //bcz of *p having address of a so *p is relpace the value of 10 and puts new 20 value


    return 0;


}
#include<stdio.h>
#define SZ 10
int main()
{
    int i=0;
    char name[SZ][50]={"Neha Kumari","Anshu Mala","Jyoti","Payal","Priya","Lisa Manoban","Siya","Gracy","Ginni"};

     for ( i = 0; i < SZ; i++)
     {
        printf("\n<option value=\"%d\"> %s </option>",i+1,name[i]);
     }
     return 0;
     
}
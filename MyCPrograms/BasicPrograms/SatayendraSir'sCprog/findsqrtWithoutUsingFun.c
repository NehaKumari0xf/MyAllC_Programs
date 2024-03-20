#include<stdio.h>
int main()
{
    float num,i;

    printf("Enter any number:");
    scanf("%d",&num);

    for ( i = 0; i*i < num; i++);
    
    printf("\n%f",i);
    
    return 0;
}
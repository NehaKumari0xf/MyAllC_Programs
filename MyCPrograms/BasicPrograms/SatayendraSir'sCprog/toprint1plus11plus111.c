/*    write a c program input a number and print 1 + 11 + 111.... and sum = 123     */

#include<stdio.h>

int main()

{
   unsigned short int n,i,sum=0,j=1;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d  ",j);
        if (i<n)
        {
            printf("+ ");
        }
        sum=sum+j;
        j=(j*10)+1;
    }
    printf("\nsum is : %d",sum);
      
    return 0;  
}
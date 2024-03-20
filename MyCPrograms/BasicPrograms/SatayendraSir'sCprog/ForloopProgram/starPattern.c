/*
#include<stdio.h>
int main()
{
    int i,j,k;

    for ( i = 0; i < 5; i++)
    {
        for( k = 1; k <=i ; k++)
        {
        printf("*");
        }printf("\n");
    }
    return 0;
    
}
*/
/*
output:- *
         **
         ***
         ****
         *****  
*/

#include<stdio.h>
int main()
{
    int i,j,k;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 5; j > i ; i--)
        {
            printf("  ");
            for ( k = i; k > i; i++)
            {
                printf("*");
            }
            
        }printf("\n");
        
    }
    return 0;
}
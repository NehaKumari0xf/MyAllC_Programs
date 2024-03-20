#include<stdio.h>
int main()
{
    static int i=5;
    if(--i)
    {
        main();
        printf("\n%d",i);
    }
    return 0;
}
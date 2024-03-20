//Random number between 1 to 6
//Random number between 50 to 75
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int r,i;
    //seed random number generation
    srand(time(NULL));
    //r=rand()%6+1;
    //printf("\n%d",r);

    for (size_t i = 0; i < 20; i++)
    {
        r=rand()%25+50;
        printf("\n%d",r);
    }
    
}
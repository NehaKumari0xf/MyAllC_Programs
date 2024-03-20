/* Menu Driven Program*/

#include<stdio.h>
#include<process.h>

int menu()
{
    int ch;

    printf("\n\n******* Menu Driven *******\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Exit");
   // system ("cls");
    do
    {
         printf("\n\nEnter your choice(1-6):");
         scanf("%d",&ch);
         if(ch>0&&ch<=6)
         return ch;
    
    } while (1);

}

void line()
{
    int i;
    printf("\n");
    for (i = 0; i < 50; i++)
    printf("=");
    
    
}

void add()
{
    float a,b,sum;

    printf("\nEnter first (+)ve number:");
    scanf("%f",&a);
    printf("\nEnter Second (+)ve number:");
    scanf("%f",&b);
    
    sum=a+b;
    printf("\n%f + %f = %f",a,b,sum);

    return ;    
}

void sub()
{
    float a,b,sub;

    printf("\nEnter first (+)ve number:");
    scanf("%f",&a);
    printf("\nEnter Second (+)ve number:");
    scanf("%f",&b);
    
    sub=a-b;
    printf("\n%f - %f = %f",a,b,sub);
 
    return ;
}

void multiply()
{
    float a,b,product;

    printf("\nEnter first (+)ve number:");
    scanf("%f",&a);
    printf("\nEnter Second (+)ve number:");
    scanf("%f",&b);
    
    product=a*b;
    printf("\n%f * %f = %f",a,b,product);

}

void division()
{
    float a,b,div;

    printf("\nEnter first (+)ve number:");
    scanf("%f",&a);
    printf("\nEnter Second (+)ve number:");
    scanf("%f",&b);
    
    div=a/b;
    printf("\n%f / %f = %f",a,b,div);

}

void power()
{
    float a,b,sum;

    printf("\nEnter first (+)ve number:");
    scanf("%f",&a);
    printf("\nEnter Second (+)ve number:");
    scanf("%f",&b);

    printf("\nI'm Power");

}

int main()
{
    do
    {
        switch(menu())
        {
            case 1:
            line();
            add();
            break;
            case 2:
            line();
            sub();
            break;
            case 3:
            line();
            multiply();
            break;
            case 4:
            line();
            division();
            break;
            case 5:
            line();
            power();
            break;
            case 6:
            return 0;
        }
        printf("\n");
        system("pause");
    } while (1);   
}
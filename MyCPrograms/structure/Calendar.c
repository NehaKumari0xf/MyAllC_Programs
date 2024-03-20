/* C Program that will accept month and year and print the calendar of that month*/

#include<stdio.h>
#include<math.h>
#include<process.h>
int main()
{
    int d,m,y,d1,m1,y1;
    int weekDayNumber;
    int calendar[42]={0};
    int i,j,mn;
    int totalDayInMonth;

    printf("Enter year:");
    scanf("%d",&y);
    y=abs(y);
    //find the week day of 1st day of given month and year
    for(mn=1;mn<=12;mn+=1)
    {
    d=1;
    m=mn;
    d1=d;
    m1=m;
    y1=y;

    if(m1<3)
    {
        d1+=y1;
        y1-=1;
    }
    else
    {
        d1+=y1-2;
    }
    weekDayNumber=(23*m1/9+d1+4+y1/4-y1/100+y1/400)%7;

    //find total day in given month
    if(m==2)
    {
        if(y%4==0&&y%100!=0||y%400==0)
        totalDayInMonth=29;
        else
        totalDayInMonth=28;
    }
    else if(m==4||m==6||m==9||m==11)
    totalDayInMonth=30;
    else
    totalDayInMonth=31;

    //fill array with 0
    for(i=0;i<42;i++)calendar[i]=0;

    //now fill array from 1 to totalDaysInMonth
    //find the starting element
    for(i=weekDayNumber,j=1;j<=totalDayInMonth;i+=1,j+=1)calendar[i]=j;

    
    switch (m1)//m stands 4 month
    {
    case 1:
    printf("January");  
        break;
    case 2:
    printf("February");
            break;
    case 3:
    printf("March");
        break;
    case 4:
    printf("April ");
        break;
    case 5:
    printf("May ");
        break;
    case 6:
    printf("June ");
        break;
    case 7:
    printf("July ");
        break;
    case 8:
    printf("August ");
        break;
    case 9:
    printf("September ");
        break;
    case 10:
    printf("October ");
        break;
    case 11:
    printf("November ");
        break;
    case 12:
    printf("December ");
        break;
    default:
        printf("Sorry! you have enetred invalid month");
        break;
    }
    
    //print Calendar
    printf("\n\t\t %2d, %4d",m,y);
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    
    
    printf("\n%4s %4s %4s %4s %4s %4s %4s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    printf("\n");
    for(i=0;i<42;i++)
    {
        if(calendar[i]==0)
        printf("     ");
        else
        printf("%4d ",calendar[i]);
        if((i+1)%7==0)
        printf("\n");
    }
    //printf("\n");
    }
    system("pause");
    return 0;



}


/* C Program that will accept month and year and print the calendar of that month*/
/*#include<stdio.h>
int main()
{
    int d,m,y,d1,m1,y1;
    int weekDayNumber;
    int calendar[42]={0};
    int i,j;
    int totalDayInMonth;

    printf("Enter month and year:");
    scanf("%d%*c%d",&m,&y);
    if(m<=0||m>12||y<=0)
    {
        printf("\n Sorry invalid month or year entered.\n");
        system("pause");
    }

    //find the week day of 1st day of given month and year
    d=1;

    d1=d;
    m1=m;
    y1=y;

    if(m1<3)
    {
        d1+=y1;
        y1-=1;
    }
    else
    {
        d1+=y1-2;
    }
    weekDayNumber=(23*m1/9+d1+4+y1/4-y1/100+y1/400)%7;

    //find total day in given month
    if(m==2)
    {
        if(y%4==0&&y%100!=0||y%400==0)
        totalDayInMonth=29;
        else
        totalDayInMonth=28;
    }
    else if(m==4||m==6||m==9||m==11)
    totalDayInMonth=30;
    else
    totalDayInMonth=31;

    //now fill array from 1 to totalDaysInMonth
    //find the starting element
    for(i=weekDayNumber,j=1;j<=totalDayInMonth;i+=1,j+=1)calendar[i]=j;
    
    //print month name
    switch (m1)//m stands 4 month
    {
    case 1:
    printf("January");  
        break;
    case 2:
    printf("February");
            break;
    case 3:
    printf("March");
        break;
    case 4:
    printf("April ");
        break;
    case 5:
    printf("May ");
        break;
    case 6:
    printf("June ");
        break;
    case 7:
    printf("July ");
        break;
    case 8:
    printf("August ");
        break;
    case 9:
    printf("September ");
        break;
    case 10:
    printf("October ");
        break;
    case 11:
    printf("November ");
        break;
    case 12:
    printf("December ");
        break;
    default:
        printf("Sorry! you have enetred invalid month");
        break;
    }
    
    //print Calendar
    printf("\n\t\t %d, %4d",m,y);
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    
    
    printf("\n%4s %4s %4s %4s %4s %4s %4s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
    printf("\n");
    for(i=0;i<35;i++)
    printf("%c",205);
    printf("\n");
    for(i=0;i<42;i++)
    {
        if(calendar[i]==0)
        printf("    ");
        else
        printf("%4d ",calendar[i]);
        if((i+1)%7==0)
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;



}*/
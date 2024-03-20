
#include<stdio.h>
#include<process.h>
#include<time.h>

struct FeDate
{
    int day;
    int month;
    int year;
};
int isValid(struct FeDate fedate)
{
    if(fedate.day>0&&fedate.day<=31&&fedate.month>0&&fedate.month<=12&&fedate.year>0)
    {
        if(fedate.month==2)
        {
            if(fedate.year%4==0&&fedate.year%100!=0||fedate.year%400==0)
            {
                if(fedate.day<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(fedate.day<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(fedate.month==4||fedate.month==6||fedate.month==9||fedate.month==11)
        {
            if(fedate.day<=30)
            return 1;
            else
            return 0;
        }
        else
        return 1;

    }
    else
    return 0;

}


int main()
{
    struct FeDate date,fetoday;
    int day,month,year;
    time_t fetseconds;
    struct tm *td;

    //1. accept date from user
    printf("Enter valid Date(dd/mm/yyyy):");
    scanf("%2d%*c%2d%*c%4d",&date.day,&date.month,&date.year);
    //validate entered date
    if(isValid(date)==0)
    {
        printf("\nSorry Sir/Mam! you have entered an invalid date.\n");
        system("pause");
        return 0;
    }

    //2. access system date

    time(&fetseconds);
    td=localtime(&fetseconds);

    fetoday.day=td->tm_mday;
    fetoday.month=td->tm_mon+1;
    fetoday.year=td->tm_year+1900;

    //3. Subtract Date

    if(fetoday.day<date.day)
    {
        if(fetoday.month-1==2)
        {
            if(fetoday.year%4==0&&fetoday.year%100!=0||fetoday.year%400==0)
            {
                fetoday.day+=29;
            }
            else
                fetoday.day+=28;
        }
        else if(fetoday.month-1==4||fetoday.month-1==6||fetoday.month-1==9||fetoday.month-1==11)
            fetoday.day+=30;
        else
            fetoday.day+=31;

        fetoday.month-=1;
    }

    if(fetoday.month<date.month)
    {
        fetoday.month+=12;
        fetoday.year-=1;
    }

    year=fetoday.year-date.year;
    month=fetoday.month-date.month;
    day=fetoday.day-date.day;


    //4.check 
    if(year>=2022 && month>=9 && day>=15)
    {
    printf("\nFuture date");
    }else if(year==2022 && month==9 && day==15)
    {
        printf("\nPresent date");
    }else
    {
    printf("\nPast date");
    }


    return 0;


}
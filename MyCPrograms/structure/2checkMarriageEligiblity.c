/*
write a c program to chech a couples is eligible to marriage or not
*/

#include<stdio.h>
#include<process.h>
#include<time.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct FeDate
{
    int feday;
    int femonth;
    int feyear;
};

int isValid(struct Date date)
{
    if(date.day>0&&date.day<=31&&date.month>0&&date.month<=12&&date.year>0)
    {
        if(date.month==2)
        {
            if(date.year%4==0&&date.year%100!=0||date.year%400==0)
            {
                if(date.day<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(date.day<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(date.month==4||date.month==6||date.month==9||date.month==11)
        {
            if(date.day<=30)
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

//for female
int isValidfe(struct FeDate fedate)
{
    if(fedate.feday>0&&fedate.feday<=31&&fedate.femonth>0&&fedate.femonth<=12&&fedate.feyear>0)
    {
        if(fedate.femonth==2)
        {
            if(fedate.feyear%4==0&&fedate.feyear%100!=0||fedate.feyear%400==0)
            {
                if(fedate.feday<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(fedate.feday<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(fedate.femonth==4||fedate.femonth==6||fedate.femonth==9||fedate.femonth==11)
        {
            if(fedate.feday<=30)
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
    struct Date dob,today;
    int day,month,year;
    time_t tseconds;

    struct FeDate fedob,fetoday;
    int feday,femonth,feyear;
    time_t fetseconds;


    struct tm *td;

    //1. accept dob from user
    printf("\n\n-----------------------------------------------------------------------");
    printf("\n||\t\t\tCheck Marriage Eligibility\t\t\t||");
    printf("\n-----------------------------------------------------------------------");
    printf("\n\nEnter valid DOB(dd/mm/yyyy) of Male:");
    scanf("%2d%*c%2d%*c%4d",&dob.day,&dob.month,&dob.year);
    printf("\nEnter valid DOB(dd/mm/yyyy) of Female:");
    scanf("%2d%*c%2d%*c%4d",&fedob.feday,&fedob.femonth,&fedob.feyear);
    
    //validate entered date
    if(isValid(dob)==0)
    {
        printf("\n\nSorry! Tou have entered an invalid date.\n\n");
        system("pause");
        return 0;
    }

    //for female
    if(isValidfe(fedob)==0)
    {
        printf("\n\nSorry! Tou have entered an invalid date.\n\n");
        system("pause");
        return 0;
    }

    //2. access system date

    time(&tseconds);
    td=localtime(&tseconds);

    //for female
    time(&fetseconds);
    td=localtime(&fetseconds);


    today.day=td->tm_mday;
    today.month=td->tm_mon+1;
    today.year=td->tm_year+1900;

    //for female
    fetoday.feday=td->tm_mday;
    fetoday.femonth=td->tm_mon+1;
    fetoday.feyear=td->tm_year+1900;

    //3. Subtract Date

    if(today.day<dob.day)
    {
        if(today.month-1==2)
        {
            if(today.year%4==0&&today.year%100!=0||today.year%400==0)
            {
                today.day+=29;
            }
            else
                today.day+=28;
        }
        else if(today.month-1==4||today.month-1==6||today.month-1==9||today.month-1==11)
            today.day+=30;
        else
            today.day+=31;

        today.month-=1;
    }

    if(today.month<dob.month)
    {
        today.month+=12;
        today.year-=1;
    }

    year=today.year-dob.year;
    month=today.month-dob.month;
    day=today.day-dob.day;

    printf("\nMale is %d year(s) old.",year);


    //for female
    if(fetoday.feday<fedob.feday)
    {
        if(fetoday.femonth-1==2)
        {
            if(fetoday.feyear%4==0&&fetoday.feyear%100!=0||fetoday.feyear%400==0)
            {
                fetoday.feday+=29;
            }
            else
                fetoday.feday+=28;
        }
        else if(fetoday.femonth-1==4||fetoday.femonth-1==6||fetoday.femonth-1==9||fetoday.femonth-1==11)
            fetoday.feday+=30;
        else
            fetoday.feday+=31;

        fetoday.femonth-=1;
    }

    if(fetoday.femonth<fedob.femonth)
    {
        fetoday.femonth+=12;
        fetoday.feyear-=1;
    }

    feyear=fetoday.feyear-fedob.feyear;
    femonth=fetoday.femonth-fedob.femonth;
    feday=fetoday.feday-fedob.feday;

    printf("\nFemale is  %d year(s) old.",feyear);


    //4.check eligibility
    if(year>=21 && feyear>=18)
    printf("\n\nCongratulations! You too are eligible to marriage.\n");
    else
    if (year>=21 && feyear<18)
    printf("\n\nSir is eligible but Mam, currently you are not eligible to marriage\n");
    else
    if(year<21 && feyear>=18)
    printf("\n\nMam is eligible but Sir, currently you are not eligible to marriage\n");
    else
    printf("\n\nSorry! currently you too are not eligible to marriage.\n");
    system("pause");

    return 0;


}

/*
Write a C program that will read a valid DOB of a Person and check the 
person is eligibile to caste vote or not
*/

#include<stdio.h>
#include<process.h>
#include<time.h>
struct Date
{
    // for male variables
    int day;
    int feday;
    int month;

    //fpr female variables
    int femonth;
    int year;
    int feyear;
};

//female date 
int isValid(struct Date date)
{
    if(date.feday>0&&date.feday<=31&&date.femonth>0&&date.femonth<=12&&date.feyear>0)
    {
        if(date.month==2)
        {
            if(date.feyear%4==0&&date.feyear%100!=0||date.feyear%400==0)
            {
                if(date.feday<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(date.feday<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(date.femonth==4||date.femonth==6||date.femonth==9||date.femonth==11)
        {
            if(date.feday<=30)
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
    struct Date dob, today;
    int day,month,year;
    time_t tseconds;
    int feday, femonth, feyear;
    struct Date fedob, fetoday;
    time_t fetseconds;
    struct tm *td;

    //1. accept dob from user
    printf("\n\n-----------------------------------------------------------------------");
    printf("\n||\t\t\tCheck Marriage Eligibility\t\t\t||");
    printf("\n-----------------------------------------------------------------------");
    printf("\n\nEnter valid DOB(dd/mm/yyyy) of Female:");
    scanf("%2d%*c%2d%*c%4d",&fedob.feday,&fedob.femonth,&fedob.feyear);
    printf("\nEnter valid DOB(dd/mm/yyyy) of Male:");
    scanf("%2d%*c%2d%*c%4d",&dob.day,&dob.month,&dob.year);
    //validate entered date
    if(isValid(dob)==0)
    {
        printf("\nSorry! you have entered an invalid date.\n");
        system("pause");
        return 0;
    }

    //2. access system date
    time(&tseconds);
    td=localtime(&tseconds);

    today.day=td->tm_mday;
    today.month=td->tm_mon+1;
    today.year=td->tm_year+1900;

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
    feyear=today.year-dob.year;
    month=today.month-dob.month;
    day=today.day-dob.day;

    
    // female part
    if(isValid(fedob)==0)
    {
        printf("\n\nSorry! you have entered an invalid date.\n");
        system("pause");
        return 0;
    }

    //2. access system date for female
    time(&tseconds);
    td=localtime(&tseconds);

    fetoday.feday=td->tm_mday;
    fetoday.femonth=td->tm_mon+1;
    fetoday.feyear=td->tm_year+1900;

    //3. Subtract  for female
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
    feyear=fetoday.feyear-fedob.feyear;
    femonth=fetoday.femonth-fedob.femonth;
    feday=today.feday-fedob.feday;

    printf("\n\nFemale is %d year(s) old.",feyear);
    printf("\n\nMale is  %d year(s) old.",year);

    //4.check marriage eligibility 
    if(feyear>=18&&year>=21)
    printf("\n\nCongratulations! You too are eligible for marriage.");
    else
    printf("\n\nSorry! currently you too are not eligible to marriage.");

    return 0;


}
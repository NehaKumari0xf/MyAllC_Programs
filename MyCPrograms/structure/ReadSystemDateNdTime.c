/* C program to read system date and time*/
/*
#include<stdio.h>
#include<time.h>
int main()
{
    time_t t=time(NULL);
    struct tm *today;
    printf("\nCurrent time is %u",t);
    //convert unix seconds in day,month,year,hour and seconds
    today=localtime(&t);
    printf("\nDay=%d",today->tm_mday);
    printf("\nMonth=%d",today->tm_mon+1);
    printf("\nYear=%d",today->tm_year+1900);
    printf("\n%d:%d.%d",today->tm_hour,today->tm_min,today->tm_sec);
    printf("\nWeek Day:%d",today->tm_wday);
    printf("\nDay of year:%dth",today->tm_yday);


    return 0;
}
*/


/*
Write a C program that will read a valid DOB of a Person and check the 
person is eligibile to caste vote or not
*/


#include<stdio.h>
#include<process.h>
#include<time.h>

struct FemaleDate
{
    int feday;
    int femonth;
    int feyear;
};
int isValid(struct FemaleDate femaledate)
{
    if(femaledate.feday>0&&femaledate.feday<=31&&femaledate.femonth>0&&femaledate.femonth<=12&&femaledate.feyear>0)
    {
        if(femaledate.femonth==2)
        {
            if(femaledate.feyear%4==0&&femaledate.feyear%100!=0||femaledate.feyear%400==0)
            {
                if(femaledate.feday<=29)
                return 1;
                else
                return 0;
            }
            else{
                if(femaledate.feday<=28)
                return 1;
                else
                return 0;
            }
        }
        else if(femaledate.femonth==4||femaledate.femonth==6||femaledate.femonth==9||femaledate.femonth==11)
        {
            if(femaledate.feday<=30)
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
    struct FemaleDate fedob,fetoday;
    int feday,femonth,feyear;
    time_t fetseconds;
    struct tm *td;

    //1. accept dob from user
    printf("Enter valid DOB(dd/mm/yyyy):");
    scanf("%2d%*c%2d%*c%4d",&fedob.feday,&fedob.femonth,&fedob.feyear);
    //validate entered date
    if(isValid(fedob)==0)
    {
        printf("\nSorry Mam! you have entered an invalid date.\n");
        system("pause");
        return 0;
    }

    //2. access system date

    time(&fetseconds);
    td=localtime(&fetseconds);

    fetoday.feday=td->tm_mday;
    fetoday.femonth=td->tm_mon+1;
    fetoday.feyear=td->tm_year+1900;

    //3. Subtract Date

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

    printf("\n Person is %d year(s) %d month(s) and %d day(s) old today.",feyear,femonth,feday);

    //4.check eligibility
    if(feyear>=18)
    {
    printf("\nCongratulations Sir/Mam! You are eligible to Caste vote.");
    }else
    {
    printf("\nSorry Sir/Mam! currently you are not eligible to Caste vote.");
    }
    return 0;


}


/* Accessing structure member using pointer*/
/*
#include<stdio.h>
struct Person
{
    char name[30];
    int age;
    int weight;
};

int main()
{
    struct Person p={"Kundan Gupta",21,42};
    struct Person *ptr;

    printf("\n Name=%s",p.name);
    printf("\nage=%d",p.age);
    printf("\n weight=%d",p.weight);

    ptr=&p;

    printf("\n\nName=%s",(*ptr).name);
    printf("\n age=%d",(*ptr).age);
    printf("\n weight=%d",(*ptr).weight);

    printf("\n\n Name=%s",ptr->name);
    printf("\n age=%d",ptr->age);
    printf("\n weight=%d",ptr->weight);
    return 0;


}


#include<stdio.h>
int main()
{
    int i=0;
    unsigned long j;
    for(i=0;i<21;i+=1)
    {
        printf("\n%d. Jai sri Ganesh.",i+1);
        for(j=0;j<228000000;j+=1);
    }
    return 0;
}
*/

        
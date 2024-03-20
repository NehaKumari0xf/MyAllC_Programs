/* Structure variable initialization

Structure variable can be initialized as:

struct typeName varName={1stMemberValue,2ndMemberValue,...,lastMemberValue};
*/
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    char name[30];
    char clas[20];
    char gender;
    int roll;
    struct Date dob;
    struct Date doa;
    int marks[5];
};

int main()
{
    struct Date today={28,7,2022};
    int i;
    struct Student s={"Rahul raj","10",'m',45,{5,3,2003},{12,8,2021},{45,56,35,25,45}};
    
    printf("Today value is:%d/%d/%d",today.day,today.month,today.year);
    printf("\nName=:%s\nclass=%s\nGender=%c\nRoll=%d\nDOB:%d/%d/%d\nDOA:%d/%d/%d",s.name,s.clas,s.gender,s.roll,s.dob.day,s.dob.month,s.dob.year,s.doa.day,s.doa.month,s.doa.year);
    printf("\nMarks");
    for(i=0;i<5;i+=1)
    printf("\nPaper %d:%d",i+1,s.marks[i]);
return 0;

}
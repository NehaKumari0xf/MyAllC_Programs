/* Write a c program that will accept name,dob,doa,roll_code,marks of six subject of 5 students and print all accepted record*/

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
    struct Date dob;
    struct Date doa;
    int maths;
    int eng;
    int hindi;
    int sci;
    int sst;
    int comp;
    int t_marks;
};

int main()
{
    struct Student s[2];
    int i;

    for ( i = 0; i < 2; i++)
    {
        printf("%d. Enter Record of student:-\n\n",i+1);
        printf("Name:");
        fflush(stdin);
        gets(s[i].name);
        printf("DOB(dd/mm/yyyy):");
        scanf("%2d%*c%2d%*c%4d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("DOA(dd/mm/yyyy):");
        scanf("%2d%*c%2d%*c%4d",&s[i].doa.day,&s[i].doa.month,&s[i].doa.year);
        printf("%d. Enter Marks of student in subject of:-\n",i+1);
        printf("Maths:");
        scanf("%3d",&s[i].maths);
        printf("English:");
        scanf("%3d",&s[i].eng);
        printf("Hindi:");
        scanf("%3d",&s[i].hindi);
        printf("Science:");
        scanf("%3d",&s[i].sci);
        printf("Social Science:");
        scanf("%3d",&s[i].sst);
        printf("Computer:");
        scanf("%3d",&s[i].comp);
    }
    printf("\n*************************************************** Marksheet ********************************************************");
    printf("\n%6s  %30s   %10s   %10s   %3s %3s %3s %3s %3s %3s %3s %3s ","Sr.No.","Name","DOB","DOA","Maths","English","Hindi","Science","S.Science","Computer","Total Marks","Division");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    for(i=0;i<2;i++)
    {
        s[i].t_marks=s[i].maths+s[i].eng+s[i].hindi+s[i].sci+s[i].sst+s[i].comp;
        printf("\n%5d.  %30s   %2d/%2d/%4d   %2d/%2d/%4d  %3d  %3d  %3d  %3d  %3d  %3d  %3d  %6d",i+1,s[i].name,s[i].dob.day,s[i].dob.month,s[i].dob.year,s[i].doa.day,s[i].doa.month,s[i].doa.year,s[i].maths,s[i].eng,s[i].hindi,s[i].sci,s[i].sst,s[i].comp,s[i].t_marks);
        if (s[i].maths>=30&&s[i].eng>=30&&s[i].hindi>=30&&s[i].sci>=30&&s[i].sst>=30&&s[i].comp)
        {
            if (s[i].t_marks>=300)
                printf("First");
            else if (s[i].t_marks>=225)
                printf("Second");
        }
        else
        {
            printf("%10s","Fail");
        }
        
    }
    printf("\n-------------------------------------------------------------------------------------------------------------------------");
    return 0;

};

/*#include<stdio.h>
#include<process.h>

int main()
{
    char name[50], contactNo[11];
    char maths[3],eng[3],hindi[3],sci[3],sst[3];

    FILE *file;
    int i;

    printf("Enter name:\t");
    gets(name);

    printf("Enter contact no:\t");
    gets(contactNo);

    printf("Enter marks of subject:-");
    printf("\nMaths:\t");
    gets(maths);
    printf("English:\t");
    gets(eng);
    printf("Hindi:\t");
    gets(hindi);
    printf("Science:\t");
    gets(sci);
    printf("S.Science:\t");
    gets(sst);

    file = fopen("PersonDetail.txt","a");// file open in append mode

    if (file==NULL)
    {
        printf("Error\n");
        system("pause");
        return 0;
    }

    //write data to file
    fputc('\n',file);
    for ( i = 0; name[i]!='\0'; i++)
    fputc(name[i],file);
    fputc('\t',file);

    for(i=0;contactNo[i]!='\0';i++)
    fputc(contactNo[i],file);
    fputc('\t',file);

    for(i=0;maths[i]!='\0';i++)
    fputc(maths[i],file);
    fputc('\t',file);

    for(i=0;eng[i]!='\0';i++)
    fputc(eng[i],file);
    fputc('\t',file);

    for(i=0;hindi[i]!='\0';i++)
    fputc(hindi[i],file);
    fputc('\t',file);

    for(i=0;sci[i]!='\0';i++)
    fputc(sci[i],file);
    fputc('\t',file);

    for(i=0;sst[i]!='\0';i++)
    fputc(sst[i],file);

    fclose(file);
    printf("\nsuccesfully entered data");
    system("pause");

    return 0;
    
    
}
*/


/* Write a C program that will read name, class, roll and marks of five subject of student
 and write in file.  */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
    char name[100],class[5],rolls[5],sub1[4],sub2[4],sub3[4],sub4[4],sub5[4],totalMarks[4];
    int roll,marks1,marks2,marks3,marks4,marks5,total;
    FILE *file;
    int i;

        printf("Enter name: ");
        gets(name);
        printf("Enter Class: ");
        gets(class);
        printf("Enter Roll: ");
        scanf("%d",&roll);
        printf("Enter marks of Paper1: ");
        scanf("%d",&marks1);
        printf("Enter marks of Paper2: ");
        scanf("%d",&marks2);
        printf("Enter marks of Paper3: ");
        scanf("%d",&marks3);
        printf("Enter marks of Paper4: ");
        scanf("%d",&marks4);
        printf("Enter makrs of Paper5: ");
        scanf("%d",&marks5);
        total=marks1+marks2+marks3+marks4+marks5;

        //Convert integer to string.
        sprintf(rolls, "%d", roll);
        sprintf(sub1, "%d",marks1);
        sprintf(sub2, "%d",marks2);
        sprintf(sub3,  "%d",marks3);
        sprintf(sub4, "%d",marks4);
        sprintf(sub5,"%d",marks5);
        sprintf(totalMarks, "%d",total);


        //open file to write nmame
        file=fopen("marks.txt","a");
        if(file==NULL)
        {
            printf("File creation/opening error!\n");
            system("pause");
            return 0;
        }
        //write data to file
        for(i=0;name[i]!='\0';i+=1)
        fputc(name[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;class[i]!='\0';i+=1)
        fputc(class[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;rolls[i]!='\0';i+=1)
        fputc(rolls[i],file);

        fputc('~',file);
        for(i=0;sub1[i]!='\0';i+=1)
        fputc(sub1[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;sub2[i]!='\0';i+=1)
        fputc(sub2[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;sub3[i]!='\0';i+=1)
        fputc(sub3[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;sub4[i]!='\0';i+=1)
        fputc(sub4[i],file);
        fputc('\t',file);   // Write tab space
        for(i=0;sub5[i]!='\0';i+=1)
        fputc(sub5[i],file);
        fputc('~',file);   
        for(i=0;totalMarks[i]!='\0';i++)
        fputc(totalMarks[i],file);
        
        //write new line to file
        fputc('\n',file);

    fclose(file);
    printf("Data written to file successfully.\n");
    system("pause");
    return 0;
}

/* Write a C program that will read name, class, roll and marks of five subject of student
 and write in file.  */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
    char name[100],class[5],rolls[5],sub1[4],sub2[4],sub3[4],sub4[4],sub5[4],totalMarks[4];
    int roll,marks1,marks2,marks3,marks4,marks5,total;
    FILE *file;
    int i;

        printf("Enter name: ");
        gets(name);
        printf("Enter Class: ");
        gets(class);
        printf("Enter Roll: ");
        scanf("%d",&roll);
        printf("Enter marks of Paper1: ");
        scanf("%d",&marks1);
        printf("Enter marks of Paper2: ");
        scanf("%d",&marks2);
        printf("Enter marks of Paper3: ");
        scanf("%d",&marks3);
        printf("Enter marks of Paper4: ");
        scanf("%d",&marks4);
        printf("Enter makrs of Paper5: ");
        scanf("%d",&marks5);
        total=marks1+marks2+marks3+marks4+marks5;

        /*fprintf() This function writes formatted data to given stream 
        syntax: 
            fprintf(stream,"control string",variableNames);

        */
       
        //open file to write nmame
        file=fopen("marks.txt","a");
        if(file==NULL)
        {
            printf("File creation/opening error!\n");
            system("pause");
            return 0;
        }
        fprintf(file,"%s\t%s\t%d~%d\t%d\t%d\t%d\t%d~%d\n",name,class,roll,marks1,marks2,marks3,marks4,marks5,total);
            fclose(file);
    printf("Data written to file successfully.\n");
    system("pause");
    return 0;
}

/* Write a C program that will read name, class, roll and marks of five subject of student
 and write in file.  */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
    char name[100],class[5],rolls[5],sub1[4],sub2[4],sub3[4],sub4[4],sub5[4],totalMarks[4],str[200];
    int roll,marks1,marks2,marks3,marks4,marks5,total;
    FILE *file;
    int i;

        printf("Enter name: ");
        gets(name);
        printf("Enter Class: ");
        gets(class);
        printf("Enter Roll: ");
        scanf("%d",&roll);
        printf("Enter marks of Paper1: ");
        scanf("%d",&marks1);
        printf("Enter marks of Paper2: ");
        scanf("%d",&marks2);
        printf("Enter marks of Paper3: ");
        scanf("%d",&marks3);
        printf("Enter marks of Paper4: ");
        scanf("%d",&marks4);
        printf("Enter makrs of Paper5: ");
        scanf("%d",&marks5);
        total=marks1+marks2+marks3+marks4+marks5;

        /*fputs() It writes string data to stream/file
        syntax:
            fputs(string,stream);
        Note: It autometicaly writes new line end of stream
        */
       
        //open file to write nmame
        file=fopen("marks.txt","a");
        if(file==NULL)
        {
            printf("File creation/opening error!\n");
            system("pause");
            return 0;
        }
        / Convert all data into string /
        sprintf(str,"%s\t%s\t%d~%d\t%d\t%d\t%d\t%d~%d",name,class,roll,marks1,marks2,marks3,marks4,marks5,total);
        fputs(str,file);

        fclose(file);
        
    printf("Data written to file successfully.\n");
    system("pause");
    return 0;
}














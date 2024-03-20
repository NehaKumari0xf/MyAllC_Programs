#include<stdio.h>
#include<string.h>
#include<process.h>
#define SZ 11
int main()
{
    char names[SZ][30]={"Ankit","Rahul","Ritik","Sumit","Aaryan","Rakesh","Anshu","Neha","Kajal","Sheetal","Shubham"};
    char str[500]="";
    char n[10];
    int i;
    system("cls");
    for(i=0;i<SZ;i+=1)
    {
        strcat(str,"\n<option value=\"");
        //convert i into string
        sprintf(n,"%d",i);
        strcat(str,n);
        strcat(str,"\">");
        strcat(str,names[i]);
        strcat(str,"</option>");
        /*
        str+="<option value=\""+i+"\">"+names[i]+"</option>";
        str+=f'<option value="{i}">{names[i]}</option>';
        */
    }
    printf("\n%s",str);
    return 0;
}
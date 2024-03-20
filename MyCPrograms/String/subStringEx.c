//extracting substring from string
#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="My name is Neha Kumari. I am Indian.";
	char name1[50];
	
	//copy value of name in name1
	strcpy(name1,name);
	printf("\nName=%s, Name1=%s",name,name1);
	
	//copy value of name from 5th character to end in name1
	strcpy(name1,name+4);
	printf("\nName=%s, Name1=%s",name,name1);
	
	//copy last 6 character of name in name1
	strcpy(name1,name+strlen(name)-6);
	printf("\nName=%s, Name1=%s",name,name1);
	
	//copy first 5 character of name in name1
	strncpy(name1,name,5);
	name1[5]='\0';
	printf("\nName=%s, Name1=%s",name,name1);
	
	//copy 5 character from 7th character of name in name1
	strncpy(name1,name+6,5);
	name1[5]='\0';
	printf("\nName=%s, Name1=%s>",name,name1);
	
	
	
	return 0;
	
}

/*
Let we have a string having 2 commas in it. write statement that
will copy the content between both comma in another string.

ex:
char s1[]="My name is, Neha Kumari, . I am Indian";
char s2[100];

write statement that will copy " Neha Kumari" in s2


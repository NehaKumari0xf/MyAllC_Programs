/* C program that will accept an string having  commas and extract the string between all commas.
Step 1: accept string
step 2: find the position of first comma in string
step 3: find the position of second comma in string
step 4: find number of character between both commas
step 5: copy data from first comma+1 position to number of characters between comms in another string

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char string[200];
	char *commaPos;
	int firstCommaPosition,secondCommaPosition,totalCharacters;
	char substr[200];
	//step 1
	printf("Enter any string having minimum 2 commas:");
	gets(string);
	
	//step 2: find the position of 1st comma
	
	firstCommaPosition=-1;
	commaPos=string-1;
	
	do{
	
	commaPos=strstr(commaPos+1,",");
	if(commaPos==0)
	{
		//extract last part
		//my, name, anshu,mala
		//lengthOfstring-lastCommaPosition-1
		totalCharacters=strlen(string)-firstCommaPosition-1;
		strncpy(substr,string+firstCommaPosition+1,totalCharacters);
		substr[totalCharacters]='\0';
		printf("\n%s",substr);
		break;
	}
	
	secondCommaPosition=commaPos-string;
	
	totalCharacters=secondCommaPosition-firstCommaPosition-1;
	
	strncpy(substr,string+firstCommaPosition+1,totalCharacters);
	substr[totalCharacters]='\0';
	
	//output
	printf("\n%s",substr);
	firstCommaPosition=secondCommaPosition;
	}while(1);
	
	return 0;
}

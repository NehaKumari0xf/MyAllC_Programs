/* C program that will accept an string having 2 commas and extract the string between commas.
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
	commaPos=strstr(string,",");
	if(commaPos==0)
	{
		printf("\n Sorry! String has no comma(s)");
		return 0;
	}
	firstCommaPosition=commaPos-string;
	
	//step 3 :find the position of 2nd comma
	commaPos=strstr(commaPos+1,",");
	if(commaPos==0)
	{
		printf("\n Sorry! String has only one comma");
		return 0;
	}
	secondCommaPosition=commaPos-string;
	
	//my name is, anshu mala, singh
	//22-10=12-1=11
	//i am, a student, of GCG
	//15-4=11-1=10
	//step 4:
	totalCharacters=secondCommaPosition-firstCommaPosition-1;
	//step 5:copy in another string
	strncpy(substr,string+firstCommaPosition+1,totalCharacters);
	substr[totalCharacters]='\0';
	
	//output
	printf("\n%s",substr);
	
	return 0;
}

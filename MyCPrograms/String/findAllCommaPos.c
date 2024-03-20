//find all coma position in a string
#include<stdio.h>
#include<string.h>
int main()
{
		char name[100]=",,,Kajal,Neha,Anshu,Sheetal,Rahul,,Anil,";
		char *s;
		int previousCommaPos,currentCommaPos;
		previousCommaPos=-1;
		
		do
		{
			//search comma in string
			s=strstr(name+previousCommaPos+1,"e");
			if(s==0)break;
			currentCommaPos=s-name;
			printf("\n%d",currentCommaPos);
			previousCommaPos=currentCommaPos;
		}while(1);
		return 0;
}
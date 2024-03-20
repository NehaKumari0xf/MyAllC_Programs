#include<stdio.h>
int main(){
	char ch;
	printf("Enter Alphabet: ");
	scanf("%c",&ch);	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
		printf("Yes");
	}else
	{
		printf("Not an alphabet");
	}
	return 0;
} 
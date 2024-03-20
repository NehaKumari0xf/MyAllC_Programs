#include<stdio.h>
int main(){
	char name[40],father[40],sec[10];
	int roll,clas,math,hindi,eng,sci,comp;
	int marks[5],i;
	
	printf("Enter your name: ");
	scanf("%s",&name);
	printf("Enter your father name:");
	scanf("%s",&father);
	printf("Enter your section:");
	scanf(" %c",&sec);
	printf("Enter your roll:");
	scanf("%d",&roll);
	printf("Enter your clas:");
	scanf("%d",&clas);
	/*
	printf("Enter your math number:");
	scanf("%d",&math);
	printf("Enter your hindi number:");
	scanf("%d",&hindi);
	printf("Enter your english number:");
	scanf("%d",&eng);
	printf("Enter your science number:");
	scanf("%d",&sci);
	printf("Enter your computer number:");
	scanf("%d",&comp);
	*/
	for(i=0; i<5; i++){
		printf("Enter your paper no %d: ",i+1);
		scanf("%d",&marks[i]);
	}	
	//print
	printf("your name is %s\n",name);
	printf("your father name is %s\n",father);
	printf("your sec is %c \n", sec);
	printf("your roll is %d\n",roll);
	printf("your clas is %d\n",clas);
	for(i=1;i<=5;i++){
	printf("your marks is %d\n",marks[i]);	
	}
	
	/*printf("your hindi mark is %d/n",hindi);
	printf("your eng mark is %d/n",eng);
	printf("your sci mark is %d/n",sci);
	printf("your comp mark is %d/n",comp);
	*/	
}
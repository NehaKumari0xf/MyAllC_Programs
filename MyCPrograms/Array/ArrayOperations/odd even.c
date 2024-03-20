#include<stdio.h>
int main(){
	int num;
	printf("Enter the integer number: ");
	scanf("%d",&num);
	switch(num%2==0){
	case 1:
		printf("%d is even number",num);
		break;
			default:
				printf("%d is odd number");
				break;
				}
				return 0;
				
}
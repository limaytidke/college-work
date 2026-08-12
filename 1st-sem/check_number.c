//This is the 4th question of Theory

#include <stdio.h>

int main(void){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (num==0){
		printf("The number is zero(0)");
	}
	else{
		if (num>0){
			printf("The number is positive");
		}
		else{
			printf("The number is negative");
		}
	}
}


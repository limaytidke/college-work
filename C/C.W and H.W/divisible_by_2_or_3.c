#include <stdio.h>

int main(void){
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if ((num%2==0) || (num%3==0)){
		if (num%2==0){
			printf("The number is divisible by 2");
		}
		if (num%3==0){
			printf("The number is divisible by 3");
		}
	}
	else{
		printf("The number is neither divisible by 2 or 3");
	}
}

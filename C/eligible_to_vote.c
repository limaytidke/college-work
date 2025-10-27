//This is the 3rd question of Theory

#include <stdio.h>

int main(void){
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if (age >=18){
		printf("You are eligible to vote");
	}
	else{
		printf("You are not eligible to vote");
	}
}

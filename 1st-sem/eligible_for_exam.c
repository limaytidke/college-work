//This is the 5th question of Theory

#include <stdio.h>

int main(void){
	int attended_classes,total_classes;
	float eligible;
	printf("Enter total classes: ");
	scanf("%d",&total_classes);
	printf("Enter attended classes: ");
	scanf("%d",&attended_classes);
	eligible = 100*attended_classes/total_classes;
	if (eligible>=75){
		printf("You are eligible to give exam");
	}
	else{
		printf("You are NOT eligible to give exam");
	}
}

//This is the 2nd question of 1st ILBP practical

#include <stdio.h>

int main(void){
	float P,R,T;
	printf("\nEnter the principal amount: ");
	scanf("%f",&P);
	printf("Enter the  rate of interest: ");
	scanf("%f",&R);
	printf("Enter the time in years: ");
	scanf("%f",&T);
	printf("\nInterest: %.3f\n",P*R*T/100);
}

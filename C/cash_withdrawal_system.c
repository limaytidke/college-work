//This is the 2nd question of 3rd ILBP practical

#include <stdio.h>

int main(void){
	float balance,amount;
	printf("\nEnter balance: ");
	scanf("%f",&balance);
	printf("\nEnter amount: ");
	scanf("%f",&amount);
	if (amount<0){
		printf("\nInvalid amount\n");
	}
	else if (amount<=balance){
		balance-=amount;
		printf("\nYou withdrawed: %.2f\nbalance remains: %.2f\n",amount,balance);
	}
	else{
		printf("\nInsufficient balance\n");
	}
}

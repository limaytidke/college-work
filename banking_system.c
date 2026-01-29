//This is the 2nd question of 4th ILBP practical

#include <stdio.h>

int main(void){
	int option;
	float balance=0;
	printf("\nOPTIONS:\n1.check balance\n2.deposit money\n3.withdraw money\n4.exit");
	printf("\nEnter option(Enter index no.): ");
	scanf("%d",&option);
	while (option!=4){	
		float amount=0;
		switch (option){
		case 1:
			printf("\nYou have selected 'check balance'");
			printf("\nYour balance: %.2f",balance);
			printf("\nEnter option(Enter index no.): ");
			scanf("%d",&option);
			break;
		case 2:
			printf("\nYou have selected 'deposit money'\nEnter amount to deposit: ");
			scanf("%f",&amount);
			balance+=amount;
			printf("\nYour balance: %.2f",balance);
			printf("\nEnter option(Enter index no.): ");
			scanf("%d",&option);
			break;
		case 3:
			printf("\nYou have selected 'withdraw money'\nEnter amount to withdraw: ");
			scanf("%f",&amount);
			if (balance - amount < 0){
				printf("\nInsufficient amount");
			}
			else{
			balance-=amount;
			printf("\nYour balance: %.2f",balance);
			}
			printf("\nEnter option(Enter index no.): ");
			scanf("%d",&option);
			break;
		default:
			printf("\nInvalid option");
			printf("\nEnter option(Enter index no.): ");
			scanf("%d",&option);
		}
	}
	printf("\nYour final balance: %.2f\n",balance);
}

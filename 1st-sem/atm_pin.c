//This is the 1st question from 5th ILBP practical

#include <stdio.h>

int main(void){
	int attempt=1,pin=4356;
	while (1){
		int user;
		printf("\nEnter your ATM pin: ");
		scanf("%d",&user);
		if (user == pin){
			printf("\nAccess Granted\n");
			break;
		}
		if (attempt == 3){
			printf("\nCard Blocked \n");
			break;
		}
		else{
			printf("\nIncorrect try again");
			attempt+=1;
		}
	}
}

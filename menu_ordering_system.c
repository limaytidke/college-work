//This is the 1st question of 4th ILBP practical

#include <stdio.h>

int main(void){
	int choice,price=0,Pi=0,B=0,Pa=0;
	printf("\nMENU:\n1.Pizza (200/-)\n2.Burger (100/-)\n3.Pasta (150/-)\n4.exit");
	printf("\nEnter choice(enter index number): ");
	scanf("%d",&choice);
	while (choice!=4){
		int quantity = 0;
		switch (choice){
		case 1:
			printf("\nYou have selected Pizza\nEnter quantity: ");
			scanf("%d",&quantity);
			Pi += quantity;
			price += quantity*200;
			printf("\nEnter choice(enter index number): ");
			scanf("%d",&choice);
			break;
		case 2:
			printf("\nYou have selected Burger\nEnter quantity: ");
			scanf("%d",&quantity);
			B += quantity;
			price += quantity*100;
			printf("\nEnter choice(enter index number): ");
			scanf("%d",&choice);
			break;
		case 3:
			printf("\nYou have selected Pasta\nEnter quantity: ");
			scanf("%d",&quantity);
			Pa += quantity;
			price += quantity*150;
			printf("\nEnter choice(enter index number): ");
			scanf("%d",&choice);
			break;
		case 4:
			break;
		default:
			printf("\nInvalid choice");
			printf("\nEnter choice(enter index number): "); 
			scanf("%d",&choice);
		}
	}
	printf("\nYour bill:\nPizza: %d\nBuger: %d\nPasta: %d\nYour total bill: %d/-\n",Pi,B,Pa,price);
}

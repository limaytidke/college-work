//This is the 1st question of 10th ILBP practical

#include <stdio.h>

int calculaeFine(int daysLate){
	int fine;
	if (daysLate <= 5){
		fine = daysLate * 2;
	}
	else if (daysLate <=10){
		fine = 5*2 + (daysLate-5)*4;
	}
	else{
		fine = 5*2 + 5*4 + (daysLate-10)*6;
	}
	return fine;
}

int main(void){
	int daysLate;
	printf("Enter late days: ");
	scanf("%d",&daysLate);
	printf("\nYour fine is: %d",calculaeFine(daysLate));
}

//This is the 1st question of 6th CWS practical

#include <stdio.h>

int main(void){
	float temp[5];
	float avg=0;
	printf("Enter temperatures: ");
	for (int i=0;i<5;i++){
		scanf("%f",&temp[i]);
		avg+=temp[i];
	}
	avg = avg/5;
	printf("[");
	for (int i=0;i<5;i++){
		printf(" %.2f",temp[i]);
	}
	printf(" ]");
	printf("\nThe average temperature is: %.2f",avg);
}

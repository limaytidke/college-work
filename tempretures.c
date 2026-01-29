//This is 1st question of 9.12.25 test

#include <stdio.h>

void main(){
	float temp[7];
	printf("Enter temperatures: ");
	for (int i=0;i<7;i++){
		scanf("%f",&temp[i]);
	}
	float max=0;
	for (int i=0;i<7;i++){
		if (max<temp[i]){
			max = temp[i];
		}
	}
	printf("The maximum temperature is: %.2f",max);
}

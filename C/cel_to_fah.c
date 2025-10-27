//This is the 3rd question of 1st ILBP practical

#include <stdio.h>

int main(void){
	float celcius,fahrenheit;
	printf("\nEnter temperature in C: ");
	scanf("%f",&celcius);
	fahrenheit = ((9*celcius)/5) +32;
	printf("\ntemperature in fahrenheit: %.3f\n",fahrenheit);
}

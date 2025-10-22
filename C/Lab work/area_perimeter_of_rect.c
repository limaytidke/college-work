#include <stdio.h>

int main(void){
	float l,b;
	printf("\nEnter length: ");
	scanf("%f",&l);
	printf("\nEnter breadth: ");
	scanf("%f",&b);
	printf("\nArea: %.2f and Perimeter: %.2f\n",l*b,2*(l+b));
}


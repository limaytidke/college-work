//This is the 2nd question of 2nd ILBP practical

#include <stdio.h>

int main(void){
	int a,b,c;
	a = 10;
	b = 35;
	printf("\na: %d , b: %d",a,b);
	c = b;
	b = a;
	a = c;
	printf("\na: %d , b: %d\n",a,b);
}

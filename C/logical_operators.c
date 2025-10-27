#include <stdio.h>

int main(void){
	int a,b;
	printf("\nEnter numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nAND: %d",a&&b);
	printf("\nOR: %d",a||b);
	printf("\nNOT a: %d",!a);
	printf("\nNOT b: %d\n",!b);
}


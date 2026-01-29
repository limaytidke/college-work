//This is the 7th question of Theory

#include <stdio.h>

int main(void){
	int a,b=0;
	printf("Enter number: ");
	scanf("%d",&a);
	while (a!=0){
		b+=a;
		printf("Enter number: ");
		scanf("%d",&a);
	}
	printf("%d",b);
}

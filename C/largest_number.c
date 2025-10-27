#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter the numbers: ");
	scanf("%d%d",&a,&b);
	if (a>b){
		printf("The first number(%d) is greater",a);
	}
	else{
		printf("The second number(%d) is greater",b);
	}
}

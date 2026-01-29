//This is the 2nd question of 6th ILBP practical

#include <stdio.h>

int main(void){
	int num,sum=0;
	printf("\nEnter number: ");
	scanf("%d",&num);
	for (int i=0;i<=num;i++){
		sum+=i;
	}
	printf("\nSUM: %d\n",sum);
}

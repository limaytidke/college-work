//This is 1st question of 6th ILBP practical

#include <stdio.h>

int main(void){
	int num,i;
	printf("\nEnter number: ");
	scanf("%d",&num);
	for (i =1;i<=10;i++){
		printf("\n%d x %d = %d",num,i,num*i);
	}
	printf("\n");
}

//This is 1st question of 6th ILBP practical

#include <stdio.h>

int main(void){
	int num,multiple,result;
	printf("\nEnter number: ");
	scanf("%d",&num);
	for (multiple =1;multiple<=10;multiple++){
		result = num * multiple;
		printf("\n%d x %d = %d",num,multiple,result);
	}
	printf("\n");
}

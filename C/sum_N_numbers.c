#include <stdio.h>

int main(void){
	int num,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	while (num>0){
		sum+=num;
		num-=1;
	}
	printf("SUM: %d",sum);
}

//This is the 2nd question of 5th ILBP practical

#include <stdio.h>

int main(void){
	int num,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	while(1){
		while (num!=0){
			sum+=num%10;
			num=num/10;
		}
		if (sum>9){
		num=sum;
		sum=0;
		continue;
		}
		else{
			break;
		}
	}
	printf("sum: %d",sum);
}

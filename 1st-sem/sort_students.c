//This is the 1st question of 8th ILBP practical

#include <stdio.h>

int main(void){
	int marks[5] = {64,25,12,22,11};
	int i,j,temp,size;
	size = sizeof(marks)/sizeof(marks[0]);
	printf("Unsorted array");
	for (i=0;i<size;i++){
		printf(" %d",marks[i]);
	}
	printf("\n");
	for (i=0;i<size;i++){
		for (j=i;j<size;j++){
			if (marks[j]<marks[i]){
				temp = marks[j];
				marks[j] = marks[i];
				marks[i] = temp;
			}
		}
	}
	printf("Sorted array");
	for (i=0;i<size;i++){
		printf(" %d",marks[i]);
	}
	printf("\n");
}

//This is the 1st question of 9th ILBP practical

#include <stdio.h>

int main(void){
	int m1[2][2] = {{1,4},{3,6}};
	int m2[2][2] = {{2,3},{0,7}};
	int m3[2][2];
	int i,j;
	printf("m1:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("m2:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			m3[i][j] = (m1[i][0]*m2[0][j]) + (m1[i][1]*m2[1][j]);
		}
	}
	printf("\n");
	printf("m3:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}

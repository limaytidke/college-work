//This is the 2nd question of 9th ILBP practical

#include <stdio.h>

int main(void){
	int bed[3][5] = {{1,0,1,1,0},{2,0,0,1,0,},{3,1,1,1,0}};
	int beds=0;
	for (int i=0;i<3;i++){
		for (int j=0;j<5;j++){
			if (bed[i][j] == 0){
				beds+=1;
			}
		}
	}
	printf("\nThe number of free beds are: %d\n",beds);
}

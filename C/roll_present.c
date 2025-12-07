//This is the 1st question of 7th ILBP practical

#include <stdio.h>

int main(void){
	int student,i,search;
	printf("Enter number of students: ");
	scanf("%d",&student);
	int rollno[student];
	printf("Enter students: ");
	for (i=0;i<student;i++){
		scanf("%d",&rollno[i]);
	}
	printf("[");
	for (i=0;i<student;i++){
		printf(" %d",rollno[i]);
	}
	printf(" ]");
	printf("\nEnter roll no. to find: ");
	scanf("%d",&search);
	for (i=0;i<student;i++){
		if (rollno[i] == search){
			printf("\nroll no. is present\n");
			break;
		}
		else if (i == student-1){
			printf("\nroll no. is not present\n");
			break;
		}
	}
}

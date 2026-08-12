//This is the 1st question of 11th ILBP practical

#include <stdio.h>

struct employee{
	int ID;
	char name[20];
	float salary,HRA,DA;
};

int main(void){
	struct employee emp[3];
	for (int i=0;i<3;i++){
		printf("Enter employee ID: ");
		scanf("%d",&emp[i].ID);
		printf("Enter employee name: ");
		scanf("%s",&emp[i].name);
		printf("Enter employee salary: ");
		scanf("%f",&emp[i].salary);
		emp[i].HRA = emp[i].salary*0.2;
		emp[i].DA = emp[i].salary*0.4;
	}
	printf("\n--employee details--");
	for (int i=0;i<3;i++){
		printf("\nEmployee ID: %d",emp[i].ID);
		printf("\nEmployee name: %s",emp[i].name);
		printf("\nEmployee salary: %.2f",emp[i].salary+emp[i].HRA+emp[i].DA);
		printf("\n----");
	}
}

//This is the 2nd question of 10th ILBP practical

#include <stdio.h>

float calculateHRA(float salary){
	float HRA = salary*0.2;
	return HRA;
}

float calculateDA(float salary){
	float DA = salary*0.4;
	return DA;
}

float calculateNetSalary(float salary,float HRA,float DA){
	float NetSalary = salary + HRA + DA;
	return NetSalary;
}

void displaySlip(char name[20],int ID,float salary){
	printf("\nEmployee name: %s\nEmployee ID: %d\nFinal salary: %.2f\n",name,ID,salary);
}

void inputData(char name[20],int ID,float salary){
	int HRA,DA,NetSalary;
	HRA = calculateHRA(salary);
	DA = calculateDA(salary);
	NetSalary = calculateNetSalary(salary,HRA,DA);
	displaySlip(name,ID,NetSalary);
}

void main(){
	char name[20];
	int ID;
	float salary;
	printf("\nEnter employee name: ");
	scanf("%s",&name);
	printf("\nEnter employee ID: ");
	scanf("%d",&ID);
	printf("\nEnter employee salary: ");
	scanf("%f",&salary);
	inputData(name,ID,salary);
}

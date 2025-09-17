#include <stdio.h>
int main(){
	float x, HRA, DA, Grosssalary;
	
	
	printf("Enter the basic salary x:");
	scanf("%f", &x);
	
	HRA = .10 * x;
	DA = .05 * x;
	Grosssalary = x + HRA + DA;
	
	printf("\ngrosssalary = %.2f", Grosssalary);
	
	return 0;
	
}
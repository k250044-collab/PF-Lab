#include<stdio.h>

int main() {
	int sub1, sub2, sub3, total;
	float percentage;

	printf("enter marks for subject 1 between 0 and 100: ");
	scanf("%d", &sub1);
	if(sub1 < 0 || sub1 > 100) {
		printf("invalid marks! please enter between 0 and 100.\n");
	}
	
	printf("enter marks for subject 2 between 0 and 100: ");
	scanf("%d", &sub2);
	if(sub2 < 0 || sub2 > 100) {
		printf("invalid marks! please enter between 0-100.\n");
	}
	
	printf("enter marks for subject 3 between 0 and 100: ");
	scanf("%d", &sub3);
	if(sub3 < 0 || sub3 > 100) {
		printf("invalid marks! please enter between 0-100.\n");
	}
	

	total = sub1 + sub2 + sub3;
	percentage = (total / 300.0) * 100;
	

	printf("\nTotal Marks = %d\n", total);
	printf("Percentage = %.2f%%\n", percentage);
	
	return 0;
}
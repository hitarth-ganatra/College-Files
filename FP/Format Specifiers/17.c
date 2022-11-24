#include <stdio.h>

void main(){
	// C Program to calculate total marks and percentage of marks in 5 subjects
	
	int a, b, c, d, e;

	printf("Enter marks in 5 subjects: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("Total marks is %d and percentage is %g", a+b+c+d+e, (a+b+c+d+e)/5.0);
}
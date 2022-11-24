#include <stdio.h>

void main(){
	// C Program to print average of 5 numbers entered by user

	int a, b, c, d, e;
	printf("Enter 5 numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("Average is %d", (a+b+c+d+e)/5);
}
#include <stdio.h>

void main(){
	// C Program to add 2 numbers entered by user 

	int a, b, c;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);

	c = a + b;
	printf("Sum is %d", c);
}
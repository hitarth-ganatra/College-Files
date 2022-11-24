#include <stdio.h>

void main(){
	// C Program to use shorthand operators dynamically
	
	int a, b;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);

	// a+=b; // a = a + b
	// printf("Addition is %d", a);

	// a-=b; // a = a - b
	// printf("Subtraction is %d", a);

	// a*=b; // a = a * b
	// printf("Multiplication is %d", a);

	a/=b; // a = a / b
	printf("Division is %d", a);
}
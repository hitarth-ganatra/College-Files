#include <stdio.h>

void main(){
	// C Program to print area of triangle

	int b, h;
	float area;

	printf("Enter base and height: ");
	scanf("%d %d", &b, &h);

	area = 0.5 * b * h;
	printf("Area is %f", area);
}
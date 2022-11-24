#include <stdio.h>

void main(){
	// C Program to print area of rectangle

	int length, breadth, area;

	printf("Enter length and breadth: ");
	scanf("%d %d", &length, &breadth);

	area = length * breadth;
	printf("Area is %d", area);
}
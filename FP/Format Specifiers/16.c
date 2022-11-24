#include <stdio.h>

void main(){
	// C Program to calculate area of circle
	
	float radius, area;
	printf("Enter radius: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	
	printf("Area is %f", area);
}
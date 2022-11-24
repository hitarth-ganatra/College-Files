#include <stdio.h>

void main(){
	// C Program to find simple interest
	
	int p, r, t, si;
	printf("Enter principal, rate and time: ");
	scanf("%d %d %d", &p, &r, &t);

	si = (p*r*t)/100;
	printf("Simple interest is %d", si);
}
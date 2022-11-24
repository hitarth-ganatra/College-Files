#include <stdio.h>

void main(){
	// C Program to shift bits by left and right to 1 position
	
	int a = 5;
	//      8 4 2 1
	// 5  = 0 1 0 1
	// 2  = 0 0 1 0  Right Shift
	// 10= 1 0 1 0  Left Shift
	printf("%d", a>>1);
}
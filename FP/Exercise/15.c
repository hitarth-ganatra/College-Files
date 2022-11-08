#include <stdio.h>
void func();
void main(){
	func();
}
void func(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("The numbers before swapping are: %d %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The numbers after swapping are: %d %d", a, b);
}
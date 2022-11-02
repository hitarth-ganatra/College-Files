#include <stdio.h>

void main(){
	int num, factorial = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 1)
    {
        factorial *= num;
        num--;
    }
    printf("Factorial of %d is %d", temp, factorial);
}
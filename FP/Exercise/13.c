#include <stdio.h>
int factorial(int num);
void main(){
    int num, result;
	printf("Enter a number to get factorial of: ");
    scanf("%d", &num);
    result = factorial(num);
    
    printf("The factorial of %d is %d", num, result);
}

int factorial(int num){
    int i, factorial = 1;
    for(i=1; i<=num; i++){
        factorial *= i;
    }
    return factorial;
}
#include <stdio.h>
int fact(int num);
void main(){
    int factorial;
    int num;
    printf("Enter the number of which you want to get factorial: ");
    scanf("%d", &num);

    factorial = fact(num);

    printf("The factorial of the %d is %d", num, factorial);
}
int fact(int num){
    int i, result = 1;

    for (i = 1; i <= num; i++)
    {
        result = result * i;        
    }
    return result;
}
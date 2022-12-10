#include<stdio.h>
int fact(int num){
    
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * fact(num - 1);
    }
}
int main()
{
    // 9.	Write a program to convert decimal to binary using array.

    // Factorial using recursion

    int num, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d", num, fact(num));    
    return 0;
}

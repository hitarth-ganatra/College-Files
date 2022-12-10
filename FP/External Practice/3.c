#include<stdio.h>

int main()
{
    // C Program to check biggest number in 3 numbers with nested if

    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if(a > b){
        if(a > c){
            printf("%d is the biggest number", a);
        }
        else{
            printf("%d is the biggest number", c);
        }
    }
    else{
        if(b > c){
            printf("%d is the biggest number", b);
        }
        else{
            printf("%d is the biggest number", c);
        }
    }
    return 0;
}


#include<stdio.h>

int main()
{
    // 5.	Write a program to find the sum of 2 numbers if first number is larger than second, otherwise print the difference.

    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if(a > b)
    {
        printf("Sum of %d and %d is %d", a, b, a + b);
    }
    else
    {
        printf("Difference of %d and %d is %d", a, b, a - b);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    // 7.	Write a program to swap 2 numbers using pointer without using 3rd variable, using 3rd variable.

    int a, b, temp, *ptr_a, *ptr_b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Before Swapping: a = %d, b = %d\n\n", a, b);

    ptr_a = &a;
    ptr_b = &b;

    temp = *ptr_a;

    *ptr_a = *ptr_b;

    *ptr_b = temp;

    printf("After Swapping: a = %d, b = %d", a, b);
    return 0;
}

#include<stdio.h>

int main()
{
    // 6.	Write a menu driven program to perform all arithmetic operations using pointer variables.

    int a, b, choice, *ptr_a, *ptr_b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    ptr_a = &a;
    ptr_b = &b;

    switch (choice)
    {
    case 1:
        printf("Sum of %d and %d is %d", a, b, *ptr_a + *ptr_b);
        break;
    
    case 2:
        printf("Difference of %d and %d is %d", a, b, *ptr_a - *ptr_b);
        break;

    case 3:
        printf("Product of %d and %d is %d", a, b, *ptr_a * *ptr_b);
        break;

    case 4:
        printf("Division of %d and %d is %f", a, b, (float)*ptr_a / *ptr_b);
        break;
    default:
        printf("Please enter correct choice");
        break;
    }
    return 0;
}

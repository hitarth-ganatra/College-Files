#include<stdio.h>

int main()
{
    // Swapping 2 numbers without using 3rd variable
    int a,b;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("The value of a and b before swapping is %d and %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a and b after swapping is %d and %d", a, b);
    return 0;
}
#include<stdio.h>

int main()
{
    // 12.	Write a program to calculate power of an integer without the use of inbuilt math function.

    int num, power, result = 1, i;

    printf("Enter the number and its power: ");
    scanf("%d %d", &num, &power);

    for (i = 1; i <= power; i++)
    {
        result = result * num;
    }    

    printf("The result is %d", result);
    return 0;
}

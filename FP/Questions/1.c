#include<stdio.h>

int main()
{
    // 1.	Write a C program to find the sum of n natural numbers where n will be inserted by user.

    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n); 

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of %d natural numbers is %d", n, sum);       
    return 0;
}

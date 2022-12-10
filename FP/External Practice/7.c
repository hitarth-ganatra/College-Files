#include<stdio.h>

int main()
{
    // For Loops for printing table in c

    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}
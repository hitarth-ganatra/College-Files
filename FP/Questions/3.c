#include<stdio.h>

int main()
{
//     3.	Write a program to print this pattern:
//                             *
//                            * *
//                           * * *
//                          * * * *
//                         * * * * *

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

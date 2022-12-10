#include<stdio.h>

int main()
{
    // 2.	Write a program to find transpose of matrix.

    int a[3][3], transpose[3][3];

    printf("Enter the elements of matrix: ");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix is: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
                //    1 0     0 1  =  2
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix is: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

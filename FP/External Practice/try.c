#include<stdio.h>

int main()
{
    // Center star pyramid in c

    int i, j;
    
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=6-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

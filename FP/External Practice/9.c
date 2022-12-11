#include<stdio.h>

int main()
{
    // Fibonacci Series in c

    int num, a = 0, b = 1, nextTerm, i;
    
    // 0 1 1 2 3 5 8 13
    
    printf("Enter the number of terms to get series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d %d ", a, b);
    nextTerm = a + b;
    
    for (i = 2; i <= num; i++)
    {
        printf("%d ", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    } 
    return 0;
}

#include<stdio.h>

int main()
{   
    // Program under development

    // Write a program to print series where X and N will be inserted by user.
    //     1/x – 1/x2 + 1/x3 - 1/x4 + ……+1/xn

    int x, n;
    float sum = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum -= (float)1 / (x * i);
        }
        else
        {
            sum += (float)1 / (x * i);
        }
    }

    printf("Sum of series is %f", sum);
    return 0;
}

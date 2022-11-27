#include<stdio.h>

int main()
{
    // Check whether a number is prime or not

    int n, i, flag = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
    return 0;
}

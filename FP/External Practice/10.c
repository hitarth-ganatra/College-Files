#include<stdio.h>

int main()
{
    // To check if a number is an Armstrong Number
    // 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153
    
    int num, sum = 0, remainder = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num /= 10;
    }
    
    if (sum == temp)
    {
        printf("It is an Armstrong Number");
    }
    else
    {
        printf("It is not an Armstrong Number");
    }
    
    
    return 0;
}

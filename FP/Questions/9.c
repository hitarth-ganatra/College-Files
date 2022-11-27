#include<stdio.h>

int main()
{
    // 8.	Write a program to find the sum of digit of any number.

    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num >0){
        sum = sum + (num%10);
        num = num / 10;
    }

    printf("The sum of all digits of number is: %d", sum);
    return 0;
}

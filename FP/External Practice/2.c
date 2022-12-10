#include<stdio.h>

int main()
{
    // C Program to check if a person can get license

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 16 && age < 18)
    {
        printf("Learning license");
    }
    else if(age >= 18){
    	printf("Driving License");	
	}
    else
    {
        printf("You are not eligible to vote");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    // Switch Case with choice

    int choice;

    printf("1. cm to m\n");
    printf("2. m to cm\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("cm to m");
            break;
        case 2:
            printf("m to cm");
            break;
        default:
            printf("Invalid Input");
    }    
    return 0;
}

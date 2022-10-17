#include <stdio.h>

void main(){
    int min, max;
    printf("Enter the starting number: ");
    scanf("%d", &min);
    printf("Enter the last number: ");
    scanf("%d", &max);

    int i;
    for (i = min; i <= max; i++)
    {
            if(i % 2 == 0){
                printf("%d is even number.\n", i);
            }
            else{
                printf("%d is odd number.\n", i);
            }
    }
}
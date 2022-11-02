#include <stdio.h>

void main(){
	int min, max, i, sum = 0;

    printf("Enter the minimum number: ");
    scanf("%d", &min);
    printf("Enter the maximum number: ");
    scanf("%d", &max);
    
    for (i = min; i <= max; i++)
    {
        sum += i;
    }

    printf("Sum of numbers from %d to %d is %d\n", min, max, sum);
    printf("Average of numbers from %d to %d is %g\n", min, max, ((float)sum/((max-min) + 1)));
}
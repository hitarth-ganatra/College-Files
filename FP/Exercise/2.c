#include <stdio.h>

void main(){
	int sum = 0, i;
    for (i = 0; i < 12; i++)
    {
        sum += i;
    }

    printf("Using for loop: \n\n");
    printf("Sum is %d", sum);
    printf("\nAverage is %g\n", ((float)sum/i));

    sum = 0, i = 0;

    while (i<12)
    {
        sum += i;
        i++;
    }
    
    printf("\nUsing while loop: \n\n");
    printf("Sum is %d", sum);
    printf("\nAverage is %g", ((float)sum/i));
}
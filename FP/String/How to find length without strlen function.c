#include <stdio.h>

void main(){
	char string[5] = {'A', 'B', 'C'};
    int count = 0, i;

    for (i = 0; i < 5; i++)
    {
        if(string[i] != '\0'){
            count++;
        }
    }
    printf("String Length is : %d", count);
}
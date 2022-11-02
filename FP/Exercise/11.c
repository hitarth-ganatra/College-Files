#include <stdio.h>
#include <string.h>

void main(){
	char string[20];

    printf("Enter a string: ");
    scanf("%s", string);
    
    printf("The length of the string is: %d", strlen(string));
}
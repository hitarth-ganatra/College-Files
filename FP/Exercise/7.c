#include <stdio.h>

void main(){
	int arr[5], i;

    for(int i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is : ");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}
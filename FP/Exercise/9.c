#include <stdio.h>

void main(){
    int arr[5], min = 0, i;
    for(int i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] < min) min = arr[i];
    }
    printf("\nThe smallest number is %d", min);    
}
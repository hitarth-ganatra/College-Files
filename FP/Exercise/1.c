#include <stdio.h>

void main(){
    int n, i=1, j=0, k=0;
    int even[100];
    int odd[100];
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        if(i%2 == 0){
            even[j] = i;
            j++;
        }
        else{
            odd[k] = i;
            k++;
        }    
        i++;
    } while (i<=n);
    
    printf("\nEven numbers: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
}
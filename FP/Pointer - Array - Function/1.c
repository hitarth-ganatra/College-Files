#include<stdio.h>

int main()
{
    int array[7] = {1,2,3,4,5,6,7}, i;
    int *ptr;

    ptr = array;
    // for (i = 0; i < 7; i++)
    // {
    //     printf("Enter the value of array[%d]: ", i);
    //     scanf("%d", &array[i]);
    // }
   
    for (i = 0; i < 7; i++)
    {
        // printf("Enter the value of array[%d]: ", i);
        // scanf("%d", &array[i]);
        printf("The value of array[%d] is %d\n", i+1, array[i]);
    }

    return 0;
}
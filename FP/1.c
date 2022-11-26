#include<stdio.h>
int array(int *ptr_arr[]){
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr_arr[i]);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    array(ptr);
    return 0;
}

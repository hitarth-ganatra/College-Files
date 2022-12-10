#include<stdio.h>

int main(int argc, char const *argv[])
{
	// Program for Array to Pointer

	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;

	printf("The value of arr[0] is %d", *ptr);
	return 0;
}

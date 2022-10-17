#include <stdio.h>
int add();
void main(){
	int sum;
    sum = add();

    printf("%d", sum);
}
int add(){
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    return sum;
}
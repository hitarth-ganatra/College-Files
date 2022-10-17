#include <stdio.h>
int add();
void main(){
    int sum;
	sum = add();

    printf("%d", sum);
}
int add(){
    int x = 17, y = 18, sum;
    sum = x + y;
    return sum;
}
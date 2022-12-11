#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,b=1,nxt,num,i;

    printf("enter the num");
    scanf("%d",&num);

printf("fibonaci series is %d %d  ",a,b);
nxt=a+b;
for(i=2;i<=num;i++)
{
    printf("%d ",nxt);
    a=b;
    b=nxt;
    nxt=a+b;
}
    return 0;
}

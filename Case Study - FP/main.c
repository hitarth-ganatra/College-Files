#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[10] = "Hello";
    char b[10] = "World";

    strcat(strcat(a, " "),b);
    
    printf("%s", a);
    return 0;
}

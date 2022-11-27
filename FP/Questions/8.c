#include<stdio.h>

int main()
{
    // 8.	Write a program to print your First and Second name without using printf().

    char fname[50], lname[50];

    gets(fname);
    gets(lname);

    puts(fname);
    puts(lname);
    return 0;
}
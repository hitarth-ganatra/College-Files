#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

int add(){
    long long numbers[10000];
    char name[100];

    printf("Enter the name of the contact: ");
    getch();

    printf("Enter the number of the contact: ");
    scanf("%lld", &numbers[0]);

    printf("%s", name);
    // printf("Contact added successfully!");
    return 0;
}
int search(){
    printf("Search Function Called");
    return 0;
}
int delete(){
    printf("Delete Function Called");
    return 0;
}

int main()
{
    int choice;

    // system("cls");
    system("color 06");

    printf("***********************************************\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Welcome to the our Phone Book \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");

    printf("\t    1. Add a new contact\n");
    printf("\t    2. Search a contact\n");
    printf("\t    3. Delete a contact\n\n");

    printf("\t    Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\n");            
            add();
            break;
        case 2:
            printf("\n");
            search();
            break;
        case 3:
            printf("\n");
            delete();
            break;
        default:
            printf("\n");
            printf("\tPlease enter a valid choice.");
            break;
    }

    printf("\n***********************************************\n");

    // char name[10000];
    // printf("Enter the name of the contact: ");
    // gets(name);

    // printf("The name of the contact is: %s", name);
    return 0;
}

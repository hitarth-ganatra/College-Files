#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#define MAX 10000 // Maximum number of contacts (can be increased)

int max_num(){
    FILE *list = fopen("list.txt", "ab++");
    char buffer[MAX]; // buffer to store the data from the file
    int j = 0; // j is used to check the next serial number of the contact 
    double current, max = 0; //current stores the current serial number, max has the largest value of serial number in the file

    while(fgets(buffer, MAX, list) != NULL){
        current = atof(buffer);
        if(j == 0) max = current;
        else if(current > max) max = current;
        
        j++;
    }
    fclose(list);
    return max;
}
int add(){
    FILE *list = fopen("list.txt", "ab++");
    double number;
    char name[50];
    char surname[50];


    // To check the last serial number in the file
    // max_num(buffer, list, current, max, j);

    if (list == NULL)
    {
        printf("Failed to create the required file.");
    }
    else{
        printf("Enter the full name of the contact: ");
        scanf("%s %s", &name, &surname);

        printf("Enter the number of the contact: ");
        scanf("%lf", &number);

        fprintf(list, "%s %s %.0lf\n", name, surname, number);
        fclose(list);
    }

    fclose(list);
    
    return 0;
}
int search(){
    char name_to_search[100];
    FILE *list = fopen("list.txt", "r");
    char name[100];
    int result;
    int sn;
    char surname[100];
    double number;
    int error=0, flag = 0;
    int choice, num_to_search;
    int mns;

    mns = max_num();

    fflush(stdin);

    if (list == NULL)
    {
        printf("Failed to create the required file.");
    }
    else{
        printf("\n\tWhat details do you would like to enter? ");
        printf("\n\n\t1. Name");
        printf("\n\t2. Surname");
        printf("\n\t3. Number\n");

        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\tEnter the name of the contact to search: ");
                scanf("%s", &name_to_search);

                while(fscanf(list, "%s %s %lf\n", name, surname, &number) != EOF){

                    result = strcmp(name_to_search, name);
                    if(result == 0){
                        flag++;
                    }
                    if(error == mns - flag){
                        continue;   
                    }
                    if(flag == 0){
                        printf("\n\tNo contact found with the surname %s\n", name_to_search);
                    }
                    else{
                        printf("\n\tContact Details are: ");
                        while(flag != 0){
                            printf("\n\t%s %s - %.0lf\n", name, surname, number);
                            flag--;
                        }
                    }
                }
                break;
            
            case 2:
                printf("\tEnter the surname of the contact to search: ");
                scanf("%s", &name_to_search);

                while(fscanf(list, "%s %s %lf\n", name, surname, &number) != EOF){

                    result = strcmp(name_to_search, surname);
                    if(result == 0){
                        flag++;
                    }
                    if(flag == 0){
                        // printf("\n\tNo contact found with the surname %s\n", name_to_search);
                        error++;
                    }
                    else{
                        printf("\n\tContact Details are: ");
                        while(flag != 0){
                            printf("\n\t%s %s - %.0lf\n", name, surname, number);
                            flag--;
                        }
                    }
                    if(error == mns - flag){
                        continue;   
                    }
                    else{
                        printf("\n\tNo contact found with the surname %s\n", name_to_search);
                    }
                }
                break;
            
            case 3:
                printf("Enter the number of the contact to search: ");
                scanf("%s", &num_to_search);
                break;

            default:
                printf("Invalid choice.");
                break;
            }
        
        }

    fclose(list);
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
    system("color cf");

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
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
// #define MAX 10000 // Maximum number of contacts (can be increased)

// int max_num(){
//     FILE *list = fopen("list.txt", "ab++");
//     char buffer[MAX]; // buffer to store the data from the file
//     int j = 0; // j is used to check the next serial number of the contact 
//     double current, max = 0; //current stores the current serial number, max has the largest value of serial number in the file

//     while(fgets(buffer, MAX, list) != NULL){
//         current = atof(buffer);
//         if(j == 0) max = current;
//         else if(current > max) max = current;
        
//         j++;
//     }
//     fclose(list);
//     return max;
// }
int main();
void askagain(){
    char choice;
    printf("\n\n\tWould you like to do anything else? (y/n): ");
    scanf("%c", &choice);
    if(choice == 'y'){
        main();
    }
    else{
        printf("\n\tThank you for using the program.");
    }
}
int add(){
    FILE *list = fopen("list.txt", "ab++");
    double number;
    char name[50];
    char email[100];

    fflush(stdin);
    // To check the last serial number in the file
    // max_num(buffer, list, current, max, j);

    if (list == NULL)
    {
        printf("Failed to create the required file.");
    }
    else{
        printf("-----------------------------------------------------------------------------------------\n");
        printf("\t   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Add a number with name, number and email address \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
        printf("Enter the full name of the contact: ");
        gets(name);

        printf("Enter the number of the contact: ");
        scanf("%lf", &number);

        fflush(stdin);
        printf("Enter the email of the contact: ");
        gets(email);

        fprintf(list, "\n%s %.0lf %s\n", name, number, email);
        fclose(list);

        printf("\nRecord added successfully.\n");
        askagain();
        printf("-----------------------------------------------------------------------------------------\n");
    }

    fclose(list);
    return 0;    
    
}
int search(){
    char name_to_search[100];
    FILE *list = fopen("list.txt", "r");
    char name[100];
    int result1, result2;
    int sn;
    char surname[100];
    double number, num_to_search;
    int error=0, flag = 0;
    int choice;
    char email[100];
    int i = 1;

    // mns = max_num();

    fflush(stdin);

    if (list == NULL)
    {
        printf("Failed to create the required file.");
    }
    else{
        printf("-----------------------------------------------------------------------------------------\n");
        printf("\t\t   \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Search any number from your Contacts \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
        printf("\n\t\t   What details do you would like to enter? ");
        printf("\n\n\t\t\t\t   1. Name");
        printf("\n\t\t\t\t   2. Email");
        printf("\n\t\t\t\t   3. Number\n");

        printf("\n\t\t      Enter your choice: ");
        scanf("%d", &choice);

        
        switch (choice)
        {
            case 1:
                fflush(stdin);
                printf("\nEnter the name/surname of the contact to search: ");
                gets(name_to_search);

                printf("\n-----------------------------------------------------------------------------------------\n");         
                while(fscanf(list, "%s %s %lf %s\n", name, surname, &number, email) != EOF){

                    result1 = strcmp(name_to_search, name);
                    result2 = strcmp(name_to_search, surname);
                    if(result1 == 0 || result2 == 0){
                        flag++;
                    }
                    else{
                        error++;
                    }
                    while(flag != 0){
                            printf("\n\t%d. %s %s - %.0lf - %s", i, name, surname, number, email);
                            flag--;
                            i++;
                        }
                }         
                askagain();
                printf("\n\n-----------------------------------------------------------------------------------------\n\n");
                break;
            
            case 3:
                fflush(stdin);
                printf("\nEnter the number of the contact to search: ");
                scanf("%lf", &num_to_search);
                            
                printf("\n-----------------------------------------------------------------------------------------\n");
                while(fscanf(list, "%s %s %lf %s\n", name, surname, &number, email) != EOF){
                    if(number == num_to_search){
                        flag++;
                    }
                    else{
                        continue;
                    }
                    while(flag != 0){
                            printf("\n\t%d. %s %s - %.0lf - %s", i, name, surname, number, email);
                            flag--;
                            i++;
                    }
                }
                askagain();
                printf("\n\n-----------------------------------------------------------------------------------------\n\n");
                break;

            default:
                printf("\n\tPlease enter a valid choice.");
                askagain();
                printf("\n-----------------------------------------------------------------------------------------\n\n");
                break;
            }
        }

    fclose(list);
    return 0;
}
int delete(){
    fflush(stdin);
    FILE *list = fopen("list.txt", "r");
    char name_to_delete[100];
    double num_to_delete;
    char name[100];
    int flag = 0;
    char surname[100];
    double number;
    int choice;
    int result, result2;
    // How to delete a line from a file in C?

    if (list == NULL)
    {
        printf("Failed to create the required file.");
    }
    else{
        printf("\n\tWhat details do you would like to enter? ");
        printf("\n\n\t1. Name");
        printf("\n\t2. Number\n");

        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the name of the contact to delete: ");
                gets(name_to_delete);

                while(fscanf(list, "%s %s %lf\n", name, surname, &number) != EOF){
                    result = strcmp(name_to_delete, name);
                    result2 = strcmp(name_to_delete, surname);
                    if(result == 0 || result2 == 0){
                        flag++;
                    }
                    else{
                        continue;
                    }
                    printf("\n-----------------------------------------------------------------------------------------\n");
                    while(flag != 0){
                            
                            flag--;
                        }
                    printf("\n-----------------------------------------------------------------------------------------\n");
                }
                break;
            case 2:
                printf("Enter the number of the contact to delete: ");
                scanf("%lf", &num_to_delete);

                while(fscanf(list, "%s %s %lf\n", name, surname, &number) != EOF){
                    if(number == num_to_delete){
                        flag++;
                    }
                    else{
                        continue;
                    }
                    printf("\n-----------------------------------------------------------------------------------------\n");
                    while(flag != 0){

                            flag--;
                        }
                    printf("\n-----------------------------------------------------------------------------------------\n");
                }
                break;

            default:
                printf("\n\tPlease enter a valid choice.");
                break;
        }
    }
    
    fclose(list);
    return 0;
}
void deletefun(){
	FILE *fptr,*fptr1;
	char name[100];
	char name1[100];
	int res,f=0;
    char surname[100];
	double phone,phone1;
	fptr=fopen("list.txt","r");
	fptr1=fopen("temp.txt","a");
    fflush(stdin);
	// system("cls");
	// gotoxy(31,4);
	printf("Enter the CONTACT name that you want to delete: ");
	gets(name1);
	// system("cls");
	while(fscanf(fptr,"%s %s %lf\n",name,surname,&phone)!=EOF){
		res=strcmp(name,name1);
		if(res==0)
		{
			f=1;
			printf("Record deleted successfully");
			
		}else{
			fprintf(fptr1,"%s %s %.0lf\n",name,surname,phone);
		}
	}
	if(f==0){
		printf("Record Not found.");
    }
	fclose(fptr);
	fclose(fptr1);
	fptr=fopen("list.txt","w");
	fclose(fptr);
	fptr=fopen("list.txt","a");
	fptr1=fopen("temp.txt","r");
	while(fscanf(fptr1,"%s %s %s %s %lf\n",name,surname,&phone)!=EOF){
		fprintf(fptr,"%s %s %s %s %.0lf\n",name,surname,phone);
		
	}
	
	fclose(fptr);
	fclose(fptr1);
	fptr1=fopen("temp.txt","w");
	fclose(fptr1);
	// printf("\n\nPress y for menu option.");
	// fflush(stdin);
	// if(getch()=='y'){
	// 	menu();
	// };
}
void list(){
    FILE *list = fopen("list.txt", "r");
    char name[100];
    char surname[100];
    double number;
    char email[100];
    int i = 1;

    printf("-----------------------------------------------------------------------------------------\n");
    printf("\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Contact List \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
    while (fscanf(list, "%s %s %lf %s\n", name, surname, &number, email) != EOF)
    {
        printf("\n\t\t%d. %s %s - %.0lf - %s", i, name, surname, number, email);
        i++;
    }
    askagain();
    printf("\n\n-----------------------------------------------------------------------------------------\n");
}
void edit(){
    // FILE *list;
    // list = fopen("list.txt","w");
	// fclose(list);
}
int main()
{
    int choice;

    system("cls");
    system("color B");

    printf("***********************************************************\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB Welcome to the our Phone Book \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");

    printf("\t    1. Add a new contact\n");
    printf("\t    2. Search a contact\n");
    printf("\t    3. Modify a contact\n");
    printf("\t    4. List all contacts\n");
    printf("\t    5. Delete a contact\n\n");

    printf("\t    Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            system("cls");         
            add();
            break;
        case 2:
            system("cls");
            search();
            break;
        case 3:
            system("cls");
            edit();
            break;
        case 4:
            system("cls");
            list();
            break;
        case 5:
            system("cls");
            deletefun();
            break;
        default:
            printf("\n");
            printf("\tPlease enter a valid choice.\n");
            printf("***********************************************************\n");
            break;
    }


    return 0;
}
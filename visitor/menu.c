#include <stdio.h>

int main() {
    int choice = 0;
    printf("Main Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Exit program\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                goto option1;
            case 2:
                printf("You selected Option 2.\n");
                goto option2;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

option1:
    printf("Option 1 Menu:\n");
    printf("1. Sub-option 1\n");
    printf("2. Sub-option 2\n");
    printf("3. Go back to Main Menu\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected Sub-option 1.\n");
                goto suboption1;
            case 2:
                printf("You selected Sub-option 2.\n");
                goto suboption2;
            case 3:
                printf("Going back to Main Menu.\n");
                goto mainmenu;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

suboption1:
    printf("This is Sub-option 1.\n");
    printf("Press any key to go back to Option 1 Menu.\n");
    getchar();
    goto option1;

suboption2:
    printf("This is Sub-option 2.\n");
    printf("Press any key to go back to Option 1 Menu.\n");
    getchar();
    goto option1;

option2:
    printf("Option 2 Menu:\n");
    printf("1. Sub-option 1\n");
    printf("2. Sub-option 2\n");
    printf("3. Go back to Main Menu\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected Sub-option 1.\n");
                goto suboption3;
            case 2:
                printf("You selected Sub-option 2.\n");
                goto suboption4;
            case 3:
                printf("Going back to Main Menu.\n");
                goto mainmenu;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

suboption3:
    printf("This is Sub-option 1.\n");
    printf("Press any key to go back to Option 2 Menu.\n");
    getchar();
    goto option2;

suboption4:
    printf("This is Sub-option 2.\n");
    printf("Press any key to go back to Option 2 Menu.\n");
    getchar();
    goto option2;

mainmenu:
    printf("Main Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Exit program\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                goto option1;
            case 2:
                printf("You


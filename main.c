#include <stdio.h>
#include "editor.h"

int main() {
    int choice;
    do {
        printf("Text Editor Menu:\n");
        printf("1. Create a new file\n");
        printf("2. Open an existing file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character

        switch (choice) {
            case 1:
                create_file();
                break;
            case 2:
                open_file();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}



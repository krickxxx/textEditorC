#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "editor.h"
#include "file_ops.h"

void create_file() {
    char filename[100];
    printf("Enter the filename to create: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0; // Remove newline character

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error creating file");
        return;
    }

    char content[1000];
    printf("Enter content (type 'END' on a new line to finish):\n");
    while (1) {
        fgets(content, sizeof(content), stdin);
        if (strcmp(content, "END\n") == 0) {
            break;
        }
        fputs(content, file);
    }

    fclose(file);
    printf("File created successfully.\n");
}

void open_file() {
    char filename[100];
    printf("Enter the filename to open: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0; // Remove newline character

    read_file(filename);
}



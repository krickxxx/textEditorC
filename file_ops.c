#include <stdio.h>
#include "file_ops.h"

void read_file(const char *filename) {
    char content[1000];
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    printf("Contents of %s:\n", filename);
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }

    fclose(file);
}

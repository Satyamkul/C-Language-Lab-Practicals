#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char source_file_name[20], destination_file_name[20], c;

    printf("Enter the name of the source file: ");
    scanf("%s", source_file_name);

    printf("Enter the name of the destination file: ");
    scanf("%s", destination_file_name);

    source_file = fopen(source_file_name, "r");

    if (source_file == NULL) {
        printf("Error: Unable to open the source file.\n");
        return 1;
    }

    destination_file = fopen(destination_file_name, "w");

    if (destination_file == NULL) {
        printf("Error: Unable to open the destination file.\n");
        fclose(source_file);
        return 1;
    }

    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, destination_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(destination_file);

    return 0;
}

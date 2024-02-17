#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *temp;
    char ch;
    int del_line, temp_line;

    // Open the file in read mode
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File does not exist or cannot be opened.\n");
        exit(1);
    }

    // Open a temporary file in write mode
    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Cannot create temporary file.\n");
        fclose(fp);
        exit(1);
    }

    // Ask the user for the line to delete
    printf("Enter line number to delete: ");
    scanf("%d", &del_line);

    // Read each line from input file and copy to temporary file,
    // except the line to be deleted
    temp_line = 1;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n')
            temp_line++;
        // If current line is not the one to delete, write to temporary file
        if (temp_line != del_line)
            fputc(ch, temp);
    }

    // Close both files
    fclose(fp);
    fclose(temp);
}
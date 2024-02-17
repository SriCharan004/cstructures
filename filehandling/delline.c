#include <stdio.h>

int main() {
    FILE *fp, *temp;
    char ch;
    int del_line, temp_line;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return 0;
    }

    // Open a temporary file in write mode
    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Cannot create temporary file.\n");
        fclose(fp);
        return 0;
    }

    // Ask the user for the line to delete
    printf("Enter line number to delete: ");
    scanf("%d", &del_line);

    //read all lines except the delline
    temp_line = 1;
    while ((ch = fgetc(fp)) != EOF) { // till the last character
        if (ch == '\n')// till the end of the line
            temp_line++;
        // If current line is not the one to delete, write to temporary file
        if (temp_line != del_line)
            fputc(ch, temp);
    }

    // Close both files
    fclose(fp);
    fclose(temp);
}
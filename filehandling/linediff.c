#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256


int main(int argc, char *argv[]) {
    FILE *file1, *file2;
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];
    int lineNum = 1;

    
    // Check if correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: FileCompare File1 File2\n");
        return 1;
    }

    // Open the two files for reading
    file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        printf("Error opening file %s\n", argv[2]);
        fclose(file1);
        return 1;
    }

    // Compare line by line
    while (fgets(line1, MAX_LINE_LENGTH, file1) != NULL && fgets(line2, MAX_LINE_LENGTH, file2) != NULL) {
        if (strcmp(line1, line2) != 0) {
            printf("Mismatch found at line %d:\n", lineNum);
            printf("%s: %s", argv[1], line1);
            printf("%s: %s", argv[2], line2);
            fclose(file1);
            fclose(file2);
            return 0;
        }
        else{lineNum++;
        }
    }
    // If control reaches here, both files are same
    printf("Both files are identical.\n");

    // Close the files
    fclose(file1);
    fclose(file2);

    return 0;
}
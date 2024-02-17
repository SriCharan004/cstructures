#include <stdio.h>

#define MAX_WORD_LENGTH 100

// Function to convert a word to initcase
void initcase(char *word) {
    // Convert the first character to uppercase
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] -= 32; // Convert lowercase to uppercase
    }
    
    // Convert the rest of the characters to lowercase
    for (int i = 1; word[i] != '\0'; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] += 32; // Convert uppercase to lowercase
        }
    }
}

int main(int argc, char *argv[]) {
    FILE *inputFile, *outputFile;
    char word[MAX_WORD_LENGTH];

    // Check if correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: FileChangeCase uppercaseinputFile initcaseoutputFile\n");
        return 1;
    }

    // Open the input file for reading
    inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen(argv[2], "w");
    if (outputFile == NULL) {
        printf("Error opening file %s\n", argv[2]);
        fclose(inputFile);
        return 1;
    }

    // Read each word from input file, convert to initcase, and write to output file
    while (fscanf(inputFile, "%s", word) != EOF) {
        initcase(word); // Convert word to initcase
        fprintf(outputFile, "%s ", word); // Write word to output file
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion successful.\n");

    return 0;
}

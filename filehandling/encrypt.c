#include <stdio.h>

#define ENCRYPTION_KEY 128

// Function to encrypt or decrypt a character
char encryptDecryptChar(char ch) {
    return ch + ENCRYPTION_KEY; // Add encryption key to ASCII value
}

int main(int argc, char *argv[]) {
    FILE *inputFile, *encryptedFile, *decryptedFile;
    char ch;

    // Check if correct number of arguments are provided
    if (argc != 2) {
        printf("Usage: EncryptionDecryption inputFile\n");
        return 1;
    }

    // Open the input file for reading
    inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    // Open the output file for writing (encrypted)
    encryptedFile = fopen("encrypted.txt", "w");
    if (encryptedFile == NULL) {
        printf("Error creating encrypted file\n");
        fclose(inputFile);
        return 1;
    }

    // Encrypt the contents of input file and write to encrypted file
    while ((ch = fgetc(inputFile)) != EOF) {
        ch = encryptDecryptChar(ch); // Encrypt character
        fprintf(encryptedFile, "%d ", ch); // Write encrypted character ASCII value to file
    }

    // Close the input and encrypted files
    fclose(inputFile);
    fclose(encryptedFile);

    printf("File encrypted successfully.\n");

    // Open the encrypted file for reading
    encryptedFile = fopen("encrypted.txt", "r");
    if (encryptedFile == NULL) {
        printf("Error opening encrypted file\n");
        return 1;
    }

    // Open another file for writing (decrypted)
    decryptedFile = fopen("decrypted.txt", "w");
    if (decryptedFile == NULL) {
        printf("Error creating decrypted file\n");
        fclose(encryptedFile);
        return 1;
    }

    // Decrypt the contents of encrypted file and write to decrypted file
    while (fscanf(encryptedFile, "%hhd", &ch) != EOF) {

        ch = ch - ENCRYPTION_KEY; // Subtract encryption key from ASCII value to decrypt
        fputc(ch, decryptedFile); // Write decrypted character to file
    }

    // Close the encrypted and decrypted files
    fclose(encryptedFile);
    fclose(decryptedFile);

    printf("File decrypted successfully.\n");

    return 0;
}

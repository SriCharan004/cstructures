#include <stdio.h>

#define ENCRYPTION_KEY 128

int main(int argc, char *argv[]) {
    
    FILE *f1, *f2, *f3;

    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    f1 = fopen(argv[1], "r");
    if (f1 == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    
    f2 = fopen("encrypted", "w");
    if (f2 == NULL) {
        printf("Error creating encrypted file.\n");
        fclose(f1);
        return 1;
    }
    
    char c, new;
    while ((c = fgetc(f1)) != EOF) {
        new = c + ENCRYPTION_KEY;
        fputc(new, f2);
    }
    
    fclose(f1);
    fclose(f2);
    
    printf("Encryption Successful.\n");
    
    f2 = fopen("encrypted", "r");
    if (f2 == NULL) {
        printf("Error opening encrypted file.\n");
        return 1;
    }
    
    f3 = fopen("decrypted", "w");
    if (f3 == NULL) {
        printf("Error creating decrypted file.\n");
        fclose(f2);
        return 1;
    }
    
    while ((c = fgetc(f2)) != EOF) {
        new = c - ENCRYPTION_KEY;
        fputc(new, f3);
    }
    
    fclose(f2);
    fclose(f3);
    
    printf("Decryption Successful.\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

#define max_len 100

int main(int argc, char *argv[]) {
    FILE *f1, *f2;

    if (argc != 3) {
        printf("Error: Incorrect number of arguments\n");
        return 1;
    }

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error: Unable to open files\n");
        return 1;
    }

    char t1[max_len], t2[max_len];
    int line = 1;

    while (fgets(t1, max_len, f1) != NULL && fgets(t2, max_len, f2) != NULL) {
        if (strcmp(t1, t2) != 0) {
            printf("Mismatch found at line: %d\n", line);
            printf("First file: %s", t1);
            printf("Second file: %s", t2);
            fclose(f1);
            fclose(f2);
            return 0;
        }
        line++;
    }

    if (fgets(t1, max_len, f1) != NULL || fgets(t2, max_len, f2) != NULL) {
        printf("Error: Files have different number of lines\n");
        fclose(f1);
        fclose(f2);
        return 1;
    }

    printf("Both files are identical\n");

    fclose(f1);
    fclose(f2);

    return 0;
}

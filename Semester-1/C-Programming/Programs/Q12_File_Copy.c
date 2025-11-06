/*
PROGRAM 12:

WRITE A C PROGRAM TO COPY A TEXT FILE TO ANOTHER FILE,
READING BOTH THE INPUT FILE NAME AND TARGET FILE NAME.

Aim:
To write a C program to copy a text file to another file using standard file handling in C.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;
    char sourceName[100], targetName[100];

    // Read the source file name
    printf("Enter the source file name: ");
    scanf("%s", sourceName);

    // Open the source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Source file '%s' not found or cannot be opened!\n", sourceName);
        exit(1);
    }

    // Read the target file name
    printf("Enter the target file name: ");
    scanf("%s", targetName);

    // Open the target file in write mode
    targetFile = fopen(targetName, "w");
    if (targetFile == NULL) {
        printf("Error: Cannot open target file '%s'!\n", targetName);
        fclose(sourceFile);
        exit(2);
    }

    // Copy character by character from source to target
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("The file '%s' was copied successfully to '%s'.\n", sourceName, targetName);

    // Close files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}

/*
Sample Output:
Enter the source file name: test.txt
Enter the target file name: test1.txt
The file 'test.txt' was copied successfully to 'test1.txt'.
*/
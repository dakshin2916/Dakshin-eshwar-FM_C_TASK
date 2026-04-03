#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch, filename[100];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter file name: ");
    scanf("%s", &filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        // Count lines
        if (ch == '\n')
            lineCount++;

        // Count words
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    fclose(fp);

    // If file is not empty, adjust line count
    if (charCount > 0)
        lineCount++;

    // Display results
    printf("\nNumber of characters = %d", charCount);
    printf("\nNumber of words = %d", wordCount);
    printf("\nNumber of lines = %d\n", lineCount);

    return 0;
}
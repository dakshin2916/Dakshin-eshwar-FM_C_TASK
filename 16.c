#include <stdio.h>

void compress(char *str, int index, int count){
    // Base case: end of string
    if (str[index] == '\0') {
        return;
    }

    // If next character is same, increase count
    if (str[index] == str[index + 1]) {
        compress(str, index + 1, count + 1);
    } else {
        // Print character and its count
        printf("%c%d", str[index], count);
        compress(str, index + 1, 1);
    }
}

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    compress(str, 0, 1);

    return 0;
}
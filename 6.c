#include <stdio.h>

int main(){
    
    int i,n,vowels,consonants;
    
    printf("Enter no of letters:");
    scanf("%d,&n");

    char string[n];

    printf("Enter string:");
    for (i = 0; i < n; i++){
        scanf("%c",&string[i]);
    }

    for (i = 0; i < n; i++){
        if(string[i] == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
            vowels++;
        else
            consonants++;
    }
    
}
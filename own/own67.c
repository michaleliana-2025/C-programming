#include <stdio.h>
#include <string.h>
int main() {
    char word1[20] = "Hello ";
    char word2[] = "World";
    strcat(word1, word2); // Attaches word2 to the end of word1
    printf("%s", word1);
    return 0;
}

//W.a.p to enter a text from keyboard and find number of words present in the text.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    int word_count = 0, i = 0;
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0') {
        if (isspace(text[i]) || text[i] == '\n') {
            if (i > 0 && !isspace(text[i-1]))
                word_count++;
        }
        i++;
    }

    if (i > 0 && !isspace(text[i-1]))
        word_count++;

    printf("Number of words: %d", word_count);
    return 0;
}

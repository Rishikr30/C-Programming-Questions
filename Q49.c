// W.a.p to enter a text from keyboard and convert it into lowercase using library function.


#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
        text[i] = tolower(text[i]);

    printf("Text in lowercase: %s", text);
    return 0;
}

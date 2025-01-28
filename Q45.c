//W.a.p to enter your name from keyboard and find all vowels in your name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Vowels in your name: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
            printf("%c ", name[i]);
    }
    return 0;
}

//W.a.p to enter a string from keyboard and copy it in another array using library function.


#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    strcpy(destination, source);
    printf("Copied string: %s", destination);
    return 0;
}

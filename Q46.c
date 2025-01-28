//W.a.p to enter your name from keyboard and find length of your name.


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Length of your name is: %lu", strlen(name) - 1);  // subtract 1 to ignore the newline character
    return 0;
}

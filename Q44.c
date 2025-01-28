//W.a.p to enter your name from keyboard and print them.

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s", name);
    return 0;
}

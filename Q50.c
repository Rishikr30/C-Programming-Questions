//W.a.p to enter two strings from keyboard and concatenate these strings using library function.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}

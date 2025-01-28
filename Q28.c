//W.a.p to print Nth term of Fibonacci series.



#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Nth Fibonacci term: %d\n", a);
    return 0;
}

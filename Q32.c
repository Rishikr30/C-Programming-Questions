// W.a.p to print all Armstrong numbers between two given range.

#include <stdio.h>
#include <math.h>

int is_armstrong(int n) {
    int sum = 0, temp = n, digits = log10(n) + 1;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
        if (is_armstrong(i)) printf("%d ", i);
    return 0;
}

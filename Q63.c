//W.a.p. to create a Structure for mobile details.


#include <stdio.h>

struct Mobile {
    char brand[50];
    float price;
    int storage;
};

int main() {
    struct Mobile m1 = {"Samsung", 799.99, 128};

    printf("Mobile Details:\n");
    printf("Brand: %s\nPrice: $%.2f\nStorage: %dGB\n", m1.brand, m1.price, m1.storage);
    return 0;
}

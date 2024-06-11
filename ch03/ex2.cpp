#include <cstdio>

int main() {
    int gettysburg{};
    int* gettysburg_address = &gettysburg;
    printf("Value at gb_a: %d\n", *gettysburg_address);
    printf("GB address: %p\n", gettysburg_address);
    *gettysburg_address = 17325;
    printf("Value at gb_a: %d\n", *gettysburg_address);
    printf("GB address: %p\n", gettysburg_address);
}
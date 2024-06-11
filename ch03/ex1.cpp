#include <cstdio>

int main() {
    int gettysburg{123};
    printf("gettysburg: %d\n", gettysburg);
    int* gettysburg_address = &gettysburg;
    printf("&gettysburg: %p\n", gettysburg_address);

    // dereference with `*(address)
    int ref = *gettysburg_address;
    printf("dereferenced value: %d\n", ref);

    // deref pointer on other side of = means write to
    *gettysburg_address = 17345;
    int ref2 = *gettysburg_address;
    printf("dereferenced value: %d\n", ref2);

}
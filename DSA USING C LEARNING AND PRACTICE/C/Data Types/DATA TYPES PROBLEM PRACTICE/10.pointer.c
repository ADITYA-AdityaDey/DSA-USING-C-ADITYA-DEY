#include <stdio.h>

int main() {
    int number = 42;
    int *ptr = &number;
    printf("Value through Pointer: %d\n", *ptr);
    return 0;
}


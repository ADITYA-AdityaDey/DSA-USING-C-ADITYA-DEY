#include <stdio.h>

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Days today = Wednesday;
    printf("Day of the Week: %d\n", today);
    return 0;
}


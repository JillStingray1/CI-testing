#include <assert.h>
#include <stdio.h>

#include "include/add.h"

void add_test() {
    assert(add(3, 7) == 9 && "FAILED: add(3, 7) should return 9");
    printf("Test Case 1 passed!\n");
}

int main() {
    add_test();
    return 0;
}

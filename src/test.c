#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "include/add.h"

bool add_test() {
    printf("Testing add(int a, int b)\n");
    bool test_status = true;
    printf("\tTest 1: ");
    if (add(3, 7) == 10) {
        printf("Passed!\n");
    } else {
        printf("Failed, add(3,7) == 10\n");
        test_status = false;
    }
    return test_status;
}

int main() {
    int exit_code = 0;
    if (!add_test()) {
        exit_code = 1;
    }
    return exit_code;
}

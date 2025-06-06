#include <CUnit/Basic.h>

#include "include/add.h"

void test_add(void) {
    CU_ASSERT(add(7, 10) == 17);
}

void test_subtract(void) {
    CU_ASSERT(subtract(10, 7) == 3);
    CU_ASSERT(subtract(10 + 5, 7) == 8);
}

int main() {
    CU_pSuite suite = NULL;
    if (CUE_SUCCESS != CU_initialize_registry()) return CU_get_error();
    suite = CU_add_suite("add_suite", NULL, NULL);
    if (suite == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(suite, "test of add()", test_add) ||
        NULL == CU_add_test(suite, "test of subtract()", test_subtract)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    if (CU_get_error() != CUE_SUCCESS) {
        return CU_get_error();
    }
    return CU_get_number_of_failures() != 0;
}
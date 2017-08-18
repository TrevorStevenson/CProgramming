#include "Array.h"
#include <CUnit/CUnit.h>

void testArray();

int main(int argc, char *argv[])
{
    testArray();
    return 0;
}

void testArray()
{
    Array *array = createArray();
    add(array, 3);
    add(array, 5);
    add(array, 6);
    CU_ASSERT(array->size == 3);
}

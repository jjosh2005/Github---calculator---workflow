#include <assert.h>
#include <stdio.h>
#include "../src/calculator.h"

int main() {
    assert(add(2.0, 3.0) == 5.0);
    assert(subtract(5.0, 2.0) == 3.0);
    assert(multiply(4.0, 2.5) == 10.0);
    assert(divide(10.0, 2.0) == 5.0);

    // Edge case: division by zero
    assert(divide(5.0, 0.0) == 0.0);

    printf("All calculator test cases passed successfully!\n");

    return 0;
}

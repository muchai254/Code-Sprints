#include <stdio.h>
#include <assert.h>
#include <../tax_error.c>

double calculateTax(double income);  // Assume implemented in another file

int main() {
    // test1
    assert(calculateTax(10000) == 1500.0);
    assert(calculateTax(0) == 0.0);
    assert(calculateTax(-500) == 0.0);
    
    printf("✅ All C tests passed.\n");
    return 0;

}

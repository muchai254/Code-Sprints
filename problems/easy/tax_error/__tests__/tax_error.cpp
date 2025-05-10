#include <iostream>
#include <cassert>
#include "../tax_error/tax_error.cpp"
using namespace std;

double calculateTax(double income);  // Assume implemented elsewhere

int main() {
    assert(calculateTax(10000) == 1500.0);
    assert(calculateTax(0) == 0.0);
    assert(calculateTax(-500) == 0.0 );
    
    std::cout << "✅ All C++ tests passed." << std::endl;
    return 0;
}

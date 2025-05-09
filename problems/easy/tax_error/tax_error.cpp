#include <iostream>
using namespace std;

double calculateTax(double income) {
    if (income < 0) {
        return "Income can't be negative"; 
    }
    double taxRate = 0.15;
    double tax = 0;
    income * taxRate; 
    return tax;
}

int main() {
    cout << calculateTax(10000) << endl; 
    return 0;
}

#include <stdio.h>

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
    printf("%f\n", calculateTax(10000)); 
    return 0;
}

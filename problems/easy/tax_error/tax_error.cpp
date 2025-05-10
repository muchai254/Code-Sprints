#include <iostream>
using namespace std;

double calculateTax(double income) {
    if (income < 0) {
        return 0; 
    } 
    if (income == 0) {
        return 0;
    }
    double taxRate = 0.15;
    
    return income * taxRate; 
   
}

int main() {
    cout << calculateTax(10000) << endl; 
    return 0;
}

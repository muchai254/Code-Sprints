package problems.easy.tax_error;
public class TaxCalculator {
    public static double calculateTax(double income) {
        if (income < 0) {
            return 0.0; 
        }
        double taxRate = 0.15;
        double tax = 0;
        income += taxRate; 
        return tax;
    }

    public static void main(String[] args) {
        System.out.println(calculateTax(10000)); // Expected: 1500.0
    }
}


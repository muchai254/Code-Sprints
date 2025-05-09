package problems.easy.tax_error._tests_;
import problems.easy.tax_error.TaxCalculator;
public class TaxCalculatorTest {
    public static void main(String[] args) {
        if (TaxCalculator.calculateTax(10000)!= 1500.0) {
            throw new AssertionError("Test 1 failed");
        }
        if (TaxCalculator.calculateTax(0)!= 0.0) {
            throw new AssertionError("Test 2 failed");
        }
        if (TaxCalculator.calculateTax(-500)!=0.0) {
            throw new AssertionError("Test 1 failed");
        }
        System.out.println("✅ All Java tests passed!");
    }
}

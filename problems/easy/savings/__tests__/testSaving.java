package problems.easy.savings.__tests__;

import problems.easy.savings.savings;
public class testSaving {
    public static void main(String[] args) {
        if (savings.count_Savings(23)!=276) {
            throw new AssertionError("❌ Test failed.");
        }
        if (savings.count_Savings(53)!=1431) {
            throw new AssertionError("❌ Test failed.");
        }
        System.out.println("✅ Java test passed!");
    }
}

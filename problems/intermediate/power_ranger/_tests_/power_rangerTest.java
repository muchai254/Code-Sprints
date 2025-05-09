package problems.intermediate.power_ranger._tests_;

import problems.intermediate.power_ranger.power_ranger;;;
public class power_rangerTest {
    public static void main(String[] args) {
        if (power_ranger.getPowerRange(4, 250, 1300)!= 3) {
            throw new AssertionError("❌ Test failed");
        }
        if (power_ranger.getPowerRange(5, 31, 33)!= 1) {
            throw new AssertionError("❌ Test failed.");
        }
        System.out.println("✅ Java test passed!");
    }
}

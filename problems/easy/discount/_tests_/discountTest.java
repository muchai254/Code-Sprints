package problems.easy.discount._tests_;

import problems.easy.discount.discount;
public class discountTest {
    public static void main(String[] args) {
        if (discount.get_discount(100, 75)!= 25) {
            throw new AssertionError("❌ failed java test 1");
        }
        if (discount.get_discount(1500, 50) != 750) {
            throw new AssertionError("❌ failed java test 2");
        }
        System.out.println("✅ passed java tests");
    }
}

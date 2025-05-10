package problems.intermediate.escape_room.__tests__;

import problems.intermediate.escape_room.escape_room;;;
public class escape_roomTest {
    public static void main(String[] args) {
        if (!escape_room.is_Disarium(135)) {
            throw new AssertionError("❌ filed java test 1");
        }
        if (escape_room.is_Disarium(54)) {
            throw new AssertionError("❌ filed java test 2");
        }
        System.out.println("✅ Java test passed!");
    }
}

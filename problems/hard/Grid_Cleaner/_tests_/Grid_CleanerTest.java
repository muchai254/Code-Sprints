package problems.hard.Grid_Cleaner._tests_;

import problems.hard.Grid_Cleaner.Grid_Cleaner;;;

public class Grid_CleanerTest {
    public static void main(String[] args) {
        int[] test = {0};
        if (Grid_Cleaner.gridCleaner0(test, 0, 0, 1, 0) != 1) {
            System.out.println("❌java tests failed");
        }
        System.out.println("✅java test passed");
    }
}

package problems.easy.outofStock.__tests__;

import problems.easy.outofStock.InventoryFiller;
import java.util.*;

public class TestInventoryFiller {
    public static void main(String[] args) {
        List<String> result = InventoryFiller.inventoryFiller(
            Arrays.asList("milk", "eggs", "bread"),
            Arrays.asList("bread", "butter", "milk", "cheese")
        );

        List<String> expected = Arrays.asList("butter", "cheese");
        Collections.sort(result);
        Collections.sort(expected);

        if (result.equals(expected)) {
            System.out.println("✅ Java test passed");
        } else {
            System.out.println("❌ Java test failed");
        }
    }
}

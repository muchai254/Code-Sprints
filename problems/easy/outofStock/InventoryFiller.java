package problems.easy.outofStock;

import java.util.*;

public class InventoryFiller {
    public static List<String> inventoryFiller(List<String> inventory, List<String> required) {
        for (String item : required) {
            if (inventory.contains(item)) {
                inventory.remove(item);
            }
        }
        return inventory; 
    }
}

// fix the code 

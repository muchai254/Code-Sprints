
const inventoryFiller = require('../outofStock');
const fillInventory = require('../outofStock');

function test() {
    const result = inventoryFiller(["milk", "eggs", "bread"], ["bread", "butter", "milk", "cheese"]);
    if (JSON.stringify(result.sort()) === JSON.stringify(["butter", "cheese"].sort())) {
        console.log("✅ JS test passed");
    } else {
        console.log("❌ JS test failed");
    }
}

test();

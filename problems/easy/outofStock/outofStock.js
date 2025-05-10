function inventoryFiller(inventory, required) {
    required.forEach(item => {
        if (inventory.includes(item)) {
            inventory.splice(inventory.indexOf(item), 1);
        }
    });
    return inventory; // ❌ Incorrect logic
}

module.exports = inventoryFiller;

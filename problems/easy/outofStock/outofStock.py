def inventoryFiller(inventory, required):
    for item in required:
        if item in inventory:
            inventory.remove(item)
    return inventory  

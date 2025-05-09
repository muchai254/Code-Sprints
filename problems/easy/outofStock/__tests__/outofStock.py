from outofStock import inventoryFiller

def test():
    result = inventoryFiller(["milk", "eggs", "bread"], ["bread", "butter", "milk", "cheese"])
    if sorted(result) == sorted(["butter", "cheese"]):
        print("✅ Python test passed")
    else:
        print("❌ Python test failed")

test()

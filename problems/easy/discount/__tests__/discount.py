import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from discount import getdiscountedPS

def tests():
    if getdiscountedPS(100, 75) != 25:
        print("❌ failed python tests")
    else:
        print("✅ passed python tests")


if __name__ == "__main__":
    tests()

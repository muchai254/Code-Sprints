import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from power_ranger import getPowerRange

def test():
    if getPowerRange(2, 49, 65) != 2:
        print("❌ failed python test 1")
    if getPowerRange(4, 250, 1300) != 3:
        print("❌ failed python test 2")
    else:
        print("✅ passed all python tests congrats")


if __name__ == "__main__":
    test()
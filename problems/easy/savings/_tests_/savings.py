import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from savings.savings import count_savings

testnum = [111,175,999,1,925]
expected = [6216,15400,499500,1,428275]

def testSavings():
    for x in range(len(testSavings)):
        if count_savings(testSavings[x]) != expected[x]:
            return False
            break
    return True

if __name__ == "__main__":
    if testSavings() == True:
        print("✅ Python test passed!")

    else: print("❌ python test failed")
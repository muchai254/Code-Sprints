import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from problems.easy.vowels.vowels import count_vowels

testWords = [
    "home",
    "washing",
    "coffee"
]
expected = [
    2,
    2,
    3
]
def test():
    for x in range(3):
        if count_vowels(testWords[x]) != expected[x]:
            return False
            break
    return True

if __name__ == "__main__":
    if test() == True:
        print("✅ Python test passed!")

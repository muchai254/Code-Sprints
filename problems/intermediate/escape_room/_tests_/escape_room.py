import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))


from escape_room import is_Disarium 

def test():
    if not is_Disarium(135):
        print("❌ failed python test 1")
    if is_Disarium(122):
        print("❌ failed python test 2")
    else:
        print("✅ passed python tests")


if __name__ == "__main__":
    test()
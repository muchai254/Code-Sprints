from problems.easy.tax_error import calculate_tax

testcase = [10000,0,-500]
expected = [1500,0,0]
def test():
    passed = True
    for x in range(3):
        if calculate_tax(testcase[x]) != expected[x]:
            passed = False
            print("❌ python text failed")
            break
    
    print("✅ Python test passed!")

if __name__ =="__main__":
    test()
#include "problems/easy/savings/savings.cpp"
#include <iostream>
void test(){
    int testnum[] = {111,175,999,1,925};
    int expected[] = {6216,15400,499500,1,428275};
    for (size_t i = 0; i < 5; i++)
    {
        if (getSavings(testnum[i])!=expected[i])
        {
            std::cerr << "❌ Test failed" << "\n";
            exit(1);
        }
    }
    std::cout << "✅ C++ test passed!\n";
    
}

int main(){
    test();
    return 0;
}
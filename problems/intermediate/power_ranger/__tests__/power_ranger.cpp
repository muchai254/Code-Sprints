#include "../intermediate/power_ranger/power_ranger.cpp"
#include <iostream>
#include <stdbool.h>
void test(){
    bool passed = true;
    if (getPowerRange(1, 1, 5)!= 5)
    {
        printf("❌ failed c++ test 1");
        passed = false;
    }
    if (getPowerRange(2, 49, 65)!= 2)
    {
        printf("❌ failed c++ test 2");
        passed = false;
    }
    
    if (passed)
    {
        printf("✅ passed c++ tests");
    }
    
}

int main (){
    test();
    return 0;
}
#include <iostream>
#include <stdbool.h>
#include "../intermediate/secret agent/secret agent.cpp"

void test(){
    bool passed = true;
    if (crackCode("007")!= ["004","007","008","084","087","088","804","807","808","884","887","888"])
    {
        printf("❌ failed c test1 ");
        passed = false;
    }
    if (crackCode('8') !=['5','7','8','9','0'])
    {
        printf("❌ failed c test1 ");
        passed = false;
    }
    if (passed)
    {
       printf("✅ passed all c++ tests");
    }
    
    
}

int main(){
    test();
        return 0;
}
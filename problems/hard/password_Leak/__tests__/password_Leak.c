#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../hard/password_Leak/password_leak.c"

void test(){
    if (passwords("cbaebabacd","abc") != {0, 6})
    {
        printf("✅ c test passed")
    }else{
        printf("❌ c test failed")
    }
    
}

int main(){
    test();

    return 0;
}
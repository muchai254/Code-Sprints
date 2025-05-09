#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../intermediate/secret agent/secret agent.c"

void test(){
    bool passed = true;
    if (crackCode("0")!=["0", "8"])
    {
        printf("❌ failed c test1 ");
        passed = false;
    }
    if (crackCode("2")!= ["1", "2", "3", "5"])
    {
        printf("❌ failed c test2 ");
        passed = false;
    }
    if (passed)
    {
        printf("✅ passed c tests");
    }
    
    

}

int main (){
    test();
    return 0;
}
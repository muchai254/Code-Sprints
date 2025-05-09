#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../discount/discount.c"

void test(){
    bool passed = true;
    if (cal_discount(1500, 50)!= 750)
    {
        printf("❌ failed c test 1");
        passed = false;
    }
    if (cal_discount(89, 20)!= 71.2)
    {
        printf("❌ failed c test 1");
        passed = false;

    }
    if (passed)
    {
        printf("✅ passed all c tests");
    }
    
    

}

int main(){
    test();

    return 0;
}
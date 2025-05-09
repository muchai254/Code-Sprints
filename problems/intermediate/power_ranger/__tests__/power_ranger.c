#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../intermediate/power_ranger/power_ranger.c"

void tests(){
    bool passed =true;
    if (getPowerRange(2, 49, 65)!= 2)
    {
       printf("❌ failed c test 1");
       passed = false;

    }if (getPowerRange(2, 1, 100)!= 10)
    {
        printf("❌ failed c test 2");
        passed = false;
    }
    
    if (passed)
    {
        printf("✅ passed c tests");
    }
    
}

int main(){
    tests();

    return 0;
}
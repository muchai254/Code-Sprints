#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "../hard/Grid_Cleaner/Grid_Cleaner.c"

int grid[] ={{1}}; 
int expected[] = {0,0};
void test(){
   if (Grid_Cleaner(grid,0,0,1,0) != expected)
   {
    printf("❌ c test failed");
   }
    
   printf("✅ ctest passed");
}

int main(){

test();
    return 0;
}
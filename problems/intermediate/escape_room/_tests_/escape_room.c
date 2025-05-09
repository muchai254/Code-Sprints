#include <stdio.h>

#include "../intermediate/escape_room/escape_room.c"
#include <stdbool.h>
void test(){
    if (is_Disarium(135) == false)
    {
        printf("❌ c tests 1 failed");
    }
    if (is_Disarium(544) == true)
    {
        printf("❌ c test2 failed");
    }
    
    else
    {
        printf("✅ c test passed");
    }
    
}

int main(){
test();

return 0;
}
#include<iostream>

#include "../intermediate/escape_room/escape_room.cpp"
void test(){

    if (!is_Disarium(135))
    {
        printf("❌ c++ test 1 failed");

    }
    if (is_Disarium(78))
    {
        printf("❌ failed c++ test 2");
    }
    else{
        printf("✅ c++ test passed");
    }
    
    
}

int main(){

    test();
    return 0;
}
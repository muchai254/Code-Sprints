#include <iostream>
#include "../hard/password_Leak/password_Leak.cpp"

int main(){

    if (password_Leak("cbaebabacd", "abc")!= [0, 6])
    {
        printf("❌ failed c++ test");
    }
    
}
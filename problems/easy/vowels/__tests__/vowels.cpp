#include <cassert>
#include <iostream>

#include "./vowels/vowels.cpp"

int main (){

    // test1
    assert(count_vowels("Convention")==4);
    assert(count_vowels("Steam")== 2);
    assert(count_vowels("configurational")==7);

    std::cout << "✅ All C++ tests passed." << std::endl;
    return 0;
}
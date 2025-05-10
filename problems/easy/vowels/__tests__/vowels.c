#include <stdio.h>
#include <assert.h>
#include "../vowels/vowels.c"

int main() {
    
    // test 1
    assert(count_vowels("Portrait")==3);
    // test 2
    assert(count_vowels("Nightmare")== 3);
    // test 3
    assert(count_vowels("githubcodeSprint")==5);

    printf("✅ All C tests passed.\n");
    return 0;
}

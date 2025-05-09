package problems.easy.vowels._tests_;


import problems.easy.vowels.count_vowels;
public class vowels {
    public static void main(String[] args) {
        if (count_vowels.count_vowels("nive") != 2) {
            throw new AssertionError("Test 1 failed");
        }
        if (count_vowels.count_vowels("istead") != 3) {
            throw new AssertionError("Test 2 failed");
        }
        System.out.println("✅ All Java tests passed!");
    }
}
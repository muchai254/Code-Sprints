#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

/**
 * Calculates the minimum cost to build the string s.
 *
 * @param a Cost to add a single character.
 * @param b Cost to copy a substring.
 * @param s The string to build.
 * @return Minimum cost to build the string.
 */
int buildString(int a, int b, const string &s) {
    int n = s.size();
    vector<int> dp(n + 1, 0); 

    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1] + a;

        for (int len = 1; len <= i / 2; ++len) {
            if (s.substr(i - len, len) == s.substr(i - 2 * len, len)) {
                dp[i] = min(dp[i], dp[i - len] + b);
            }
        }
    }

    return dp[n];
}

int main() {
    int a = 4, b = 5;
    string s = "aabaacaba";
    cout << buildString(a, b, s) << endl;
    return 0;
}

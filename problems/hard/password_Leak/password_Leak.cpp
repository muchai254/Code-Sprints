
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

std::vector<int> find_anagrams(const std::string& s, const std::string& p) {
    std::vector<int> result;
    if (p.size() > s.size()) return result;

    std::unordered_map<char, int> p_count, window_count;

    for (char c : p) {
        p_count[c]++;
    }

    int left = 0, right = 0;
    int matched = 0; 

    while (right < s.size()) {
        char right_char = s[right];
        if (p_count.find(right_char) != p_count.end()) {
            window_count[right_char]++;
            if (window_count[right_char] == p_count[right_char]) {
                matched++;
            }
        }
        if (right - left + 1 == p.size()) {
            if (matched == p_count.size()) {
                result.push_back(left);
            }

            char left_char = s[left];
            if (p_count.find(left_char) != p_count.end()) {
                if (window_count[left_char] == p_count[left_char]) {
                    matched--;
                }
                window_count[left_char]--;
            }
            left++;
        }

        // Expand the window to the right
        right++;
    }

    return result;
}


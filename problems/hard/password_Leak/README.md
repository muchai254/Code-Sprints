🔐 Real-World Problem: Password Leak Detection
Scenario:
A security platform is scanning logs of user activity (s) from a potentially compromised system. The goal is to detect if any permutations (anagrams) of a sensitive keyword or password (p) have been hidden in the logs to exfiltrate data without triggering exact-match filters.

Problem Statement:
You're given:

A long string s, representing raw log data or a chat transcript.

A target string p, which is a known keyword (e.g., "admin", "root", "flag").

Write a function to return all starting indices in s where an anagram of p appears. This helps detect obfuscation or covert mentions of sensitive terms.

NOTE:
    An anagram is a word formed by rearranging the letters of a different word using all the original letters exactly once.

example
find_anagrams("cbaebabacd", "abc") ➞ [0, 6]
# Anagrams: "cba", "bac"

find_anagrams("abab", "ab") ➞ [0, 1, 2]
# Anagrams: "ab", "ba", "ab"
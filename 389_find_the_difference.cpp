#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    char findTheDifference(string s, string t) {
        int s1 = 0, s2 = 0;
        for (auto c : s) s1 += (c - 'a');
        for (auto c : t) s2 += (c - 'a');
        return abs(s1 - s2) + 'a';
    }
};
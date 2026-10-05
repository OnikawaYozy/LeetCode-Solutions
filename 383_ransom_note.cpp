#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    bool canConstruct(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s.size() == t.size() && s != t) return false;
        int p = 0;
        for (char c : t)
        {
            if (c == s[p]) p++;
            if (p == s.size()) break;
        }
        if (p == s.size()) return true;
        return false;
    }
};
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
class Solution {
public:
    str longestCommonPrefix(vector<str>& strs)
    {
        str s = strs[0];
        for (size_t i = 0; i < strs.size(); i++)
        {
            size_t min_len = (s.size() < strs[i].size()) ? s.size() : strs[i].size();
            size_t j = 0;
            while (j < min_len && s[j] == strs[i][j]) j++;
            s = s.substr(0, j);
            if (s == "") return ""; 
        }
        return s;
    }
};
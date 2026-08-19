#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        if (s[s.size() - 1] == '-')
        {
            s.erase(s.size() - 1, 1);
            if (-1 * stoll(s) < INT_MIN) return 0;
            return -1 * stoll(s);
        }
        else 
        {
            if (stoll(s) > INT_MAX) return 0;
            return stoll(s);
        }
    }
};
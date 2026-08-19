#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
class Solution {
public:
    bool isPalindrome(int x) {
        str s = to_string(x), p = to_string(x);
        reverse(p.begin(), p.end());
        if (p == s) return true;
        return false;
    }
};
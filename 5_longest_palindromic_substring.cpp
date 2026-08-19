typedef long long ll;
typedef string str;
class Solution {
public:
    str longestPalindrome(str s) {
        if (s.empty()) return "";
        ll start = 0, nmax = 1;
        for (ll i = 0; i < s.size(); i++)
        {
            ll l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r])
            {
                if (r - l + 1 > nmax)
                {
                    start = l;
                    nmax = r - l + 1;
                }
                l--;
                r++;
            }
            l = i; 
            r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r])
            {
                if (r - l + 1 > nmax)
                {
                    start = l;
                    nmax = r - l + 1;
                }
                l--;
                r++;
            }
        }
        return s.substr(start, nmax);
    }
};
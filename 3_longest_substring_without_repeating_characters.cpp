typedef long long ll;
typedef string str;
class Solution {
public:
    ll lengthOfLongestSubstring(str s) {
        vector<ll> a(256, -1);
        ll nmax = 0, l = 0;
        for (ll r = 0; r < s.length(); r++)
        {
            char k = s[r];
            if (a[k] >= l) l = a[k] + 1;
            a[k] = r;
            nmax = max(nmax, r - l + 1);
        }
        return nmax;
    }
};
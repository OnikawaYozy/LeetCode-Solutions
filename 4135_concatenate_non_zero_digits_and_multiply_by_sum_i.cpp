typedef long long ll;
typedef string str;
class Solution {
public:
    ll sumAndMultiply(int n)
    {
        if (n == 0) return 0;
        str s = to_string(n);
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        ll m = stoll(s), sum = 0;
        ll p = m;
        while (p != 0)
        {
            sum += p % 10;
            p /= 10;
        }
        return m * sum;
    }
};
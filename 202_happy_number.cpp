class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7) return true;
        while (n > 9)
        {
            int s = 0, p = n;
            while (p != 0)
            {
                s += (p % 10) * (p % 10);
                p /= 10;
            }
            if (s == 1 || s == 7) return true;
            n = s;
        }
        return false;
    }
};
class Solution {
public:
    bool isPowerOfThree(int n) {
        while (true)
        {
            if (n % 3 == 0 && n != 0) n /= 3;
            else break;
        }
        if (n == 1) return true;
        else return false;
    }
};
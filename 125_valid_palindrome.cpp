class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); )
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) i++;
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = (char)tolower(s[i]); 
                i++;
            }
            else s.erase(i, 1);
        }
        string p = s;
        reverse(p.begin(), p.end());
        return p == s;
    }
};
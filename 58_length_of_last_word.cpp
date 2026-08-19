class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss (s);
        string p;
        long long m = 0;
        while (ss >> p) m = p.size();
        return m;
    }
};
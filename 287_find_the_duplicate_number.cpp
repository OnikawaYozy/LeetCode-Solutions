class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> a(nums);
        sort(a.begin(), a.end());
        for (size_t i = 0; i < a.size() - 1; i++) if (a[i] == a[i + 1]) return a[i];
        return 0;
    }
};
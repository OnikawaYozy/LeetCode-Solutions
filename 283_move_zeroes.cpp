class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        std::stable_partition(nums.begin(), nums.end(), [p](int x) {return x != p;});
        return;
    }
};
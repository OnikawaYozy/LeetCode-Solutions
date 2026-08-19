typedef long long ll;
class Solution {
public:
    ll firstMissingPositive(vector<int>& nums)
    {
        ll n = 1;
        sort(nums.begin(), nums.end());
        while (true)
        {
            if (!binary_search(nums.begin(), nums.end(), n)) break;
            n++;
        }
        return n;
    }
};
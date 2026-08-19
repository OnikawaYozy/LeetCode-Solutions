#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums)
    {
        int a[105] = {0};
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int nmax = nums[nums.size() - 1], nmin = nums[0];
        for (size_t i = 0; i < nums.size(); i++) a[nums[i]]++;
        for (int i = nmin; i <= nmax; i++) if (a[i] == 0) ans.push_back(i);
        return ans;
    }
};
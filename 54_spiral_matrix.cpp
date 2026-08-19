typedef long long ll;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ll m = matrix.size(), n = matrix[0].size();
        ll a[m + 2][n + 2];
        memset(a, 0, sizeof(a));
        vector<int> ans;
        ll i = 0, j = 0, countt = 1, i1 = 1, j1 = 1;
        bool r = true, d = false, l = false, u = false;
        while (true)
        {
            if (countt == m * n + 1) break;
            ans.push_back(matrix[i][j]);
            a[i1][j1]++;
            if (r)
            {
                if (j + 1 == n || a[i1][j1 + 1] == 1) 
                {
                    r = false;
                    d = true;
                }
            }
            if (d)
            {
                if (i + 1 == m || a[i1 + 1][j1] == 1) 
                {
                    d = false;
                    l = true;
                }
            }
            if (l)
            {
                if (j == 0 || a[i1][j1 - 1] == 1) 
                {
                    l = false;
                    u = true;
                }
            }
            if (u)
            {
                if (i == 0 || a[i1 - 1][j1] == 1) 
                {
                    u = false;
                    r = true;
                }
            }
            if (r)
            {
                j++;
                j1++;
            }
            if (d)
            {
                i++;
                i1++;
            }
            if (l)
            {
                j--;
                j1--;
            }
            if (u)
            {
                i--;
                i1--;
            }
            countt++;
        }
        return ans;
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = (rows > 0) ? matrix[0].size() : 0;
        vector<vector<int>> ans(rows, vector<int>(cols)); 
        int x = 0, y = 0;
        for (int j = 0; j < cols; j++)
        {
            for (int i = rows - 1; i >= 0; i--) ans[x][y++] = matrix[i][j];
            x++;
            y = 0;
        }
        for (int j = 0; j < cols; j++)
        {
            for (int i = rows - 1; i >= 0; i--) matrix[i][j] = ans[i][j];
        }
    }
};
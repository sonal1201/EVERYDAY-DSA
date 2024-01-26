// LC-> Matrix Diagonal Sum

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += mat[i][i];
        }
        for (int i = 0; i < n; i++)
        {
            int j = n - i - 1;
            if (i == j)
                continue;
            ans += mat[i][j];
        }
        return ans;
    }
};
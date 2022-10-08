class Solution
{
    int f(int i, int j, vector<vector < int>>&grid, vector< vector< int>> &dp)
    {
        if (i == 0 && j == 0)
            return grid[i][j];
        if (i < 0 || j < 0)
            return 10e7;
        if (dp[i][j] != -1)
            return dp[i][j];
        int left = grid[i][j] + f(i - 1, j, grid, dp);
        int up = grid[i][j] + f(i, j - 1, grid, dp);
        return dp[i][j] = min(left, up);
    }
    public:
        int minPathSum(vector<vector < int>> &grid)
        {
            int m = grid.size(), n = grid[0].size();
            vector<vector < int>> dp(m, vector<int> (n, -1));
            return f(m - 1, n - 1, grid, dp);
        }
};
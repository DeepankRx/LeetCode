class Solution
{
    public:
        int f(vector<vector < int>> &oG, int i, int j, vector< vector< int>> &dp)
        {
            if (i < 0 || j < 0) return 0;
            if (oG[i][j] == 1) return 0;
            if (i == 0 && j == 0) return 1;

            if (dp[i][j] != -1) return dp[i][j];

            int left = f(oG, i - 1, j, dp);
            int up = f(oG, i, j - 1, dp);

            return dp[i][j] = left + up;
        }

    int uniquePathsWithObstacles(vector<vector < int>> &oG)
    {
        int row = oG.size();
        int column = oG[0].size();
        vector<vector < int>> dp(row, vector<int> (column, -1));
        return f(oG, row - 1, column - 1, dp);
    }
};
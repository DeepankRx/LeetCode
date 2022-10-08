class Solution
{
    int f(vector<int> &cost, int i, vector<int> &dp)
    {
        if (i == 1 || i == 0)
            return cost[i];
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = cost[i] + min(f(cost, i - 1, dp), f(cost, i - 2, dp));
    }
    public:
        int minCostClimbingStairs(vector<int> &cost)
        {
            int n = cost.size();
            vector<int> dp(n + 1, -1);
            return min(f(cost, n - 1, dp), f(cost, n - 2, dp));
        }
};
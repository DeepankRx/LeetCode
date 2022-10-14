class Solution
{
    int f(vector<int> &prices, vector<int> &dp, int i, int min)
    {
        if (i >= prices.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        if (prices[i] < min)
        {
            min = prices[i];
        }

        int profit = prices[i] - min;
        int choosingNext = f(prices, dp, i + 1, min);
        return dp[i] = max(profit, choosingNext);
    }
    public:
        int maxProfit(vector<int> &prices)
        {
            int n = prices.size();
            vector<int> dp(prices.size(), -1);
            return f(prices, dp, 0, prices[0]);
        }
};
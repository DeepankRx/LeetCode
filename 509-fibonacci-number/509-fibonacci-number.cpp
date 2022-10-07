class Solution
{
    int fib(vector<int> &dp, int n)
    {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = fib(dp, n - 1) + fib(dp, n - 2);
    }
    public:
        int fib(int n)
        {
            vector<int> dp(n + 1, -1);
            return fib(dp, n);
        }
};
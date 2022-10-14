class Solution
{
    bool f(vector<int> &nums, int i, vector<int> &dp,int&n)
    {
        if (i == n -1 )
            return true;
        if (dp[i] != -1)
            return dp[i];
        for (int j = 1; j <= nums.at(i); j++)
        {
           	// return dp[i] = f(nums, i - j, dp) == true;
            if (f(nums, j +i, dp,n))
                return dp[i] = true;
        }
        return dp[i] = false;
    }
    public:
        bool canJump(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> dp(n, -1);
            return f(nums, 0, dp,n);
        }
};
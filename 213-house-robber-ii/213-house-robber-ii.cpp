class Solution
{
    int f(vector<int> &nums, int i, vector<int> &dp)
    {
        if (i < 0)
            return 0;
        if (i == 0)
            return nums[i];
        if (dp[i] != -1)
            return dp[i];
        int pick = nums[i] + f(nums, i - 2, dp);
        int notPick = f(nums, i - 1, dp);
        return dp[i] = max(pick, notPick);
    }
    public:
        int rob(vector<int> &nums)
        {
            int n = nums.size();
                if(n==1)
                        return nums.at(0);
            vector<int> dp1(n, -1);
            vector<int> dp2(n, -1);
            vector<int> excludingFirst, excludingLast;
            for (int i = 0; i < n; i++)
            {
                if (i != 0)
                    excludingFirst.push_back(nums.at(i));
                if (i != n - 1)
                    excludingLast.push_back(nums.at(i));
            }
            return max(f(excludingFirst, n - 2, dp1), f(excludingLast, n - 2, dp2));
        }
};
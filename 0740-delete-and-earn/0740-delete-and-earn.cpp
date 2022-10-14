class Solution
{
    public:
        int dp[100001];
    int deleteAndEarn(vector<int> &nums)
    {

        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> freq(maxi + 1, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]] += nums[i];
        }
        memset(dp, -1, sizeof(dp));
        return getmax(freq, 0);
    }

    int getmax(vector<int> &frq, int i)
    {
        if (dp[i] != -1) return dp[i];

        if (i >= frq.size()) return 0;
        int pick = frq[i] + getmax(frq, i + 2);
        int notPick = getmax(frq, i + 1);
        return dp[i] = max(pick, notPick);
    }
};
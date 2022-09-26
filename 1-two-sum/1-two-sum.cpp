class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            unordered_map<int, int> mp;
            for (int i = 0; i < nums.size(); i++)
            {
                if (mp.find(target - nums.at(i)) != mp.end())
                {
                    return {
                        i,
                        mp[target - nums.at(i)]
                    };
                }
                mp[nums[i]] = i;
            }
            return { -1,
                -1 };
        }
};
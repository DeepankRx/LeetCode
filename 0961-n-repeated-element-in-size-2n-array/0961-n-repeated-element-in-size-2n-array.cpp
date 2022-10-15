class Solution
{
    public:
        int repeatedNTimes(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            for (auto n: nums)
            {
                mp[n]++;
            }

            for (auto m: mp)
            {
                if (m.second > 1)
                    return m.first;
            }
            return 0;
        }
};
class Solution
{
    public:
        int singleNumber(vector<int> &nums)
        {
                //use bit manipulation
            map<int, int> mp;
            for (auto n: nums)
            {
                mp[n]++;
            }
            for (auto m: mp)
            {
                if (m.second == 1)
                    return m.first;
            }
            return -1;
        }
};
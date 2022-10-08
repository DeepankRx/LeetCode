class Solution
{
    public:
        int sumOfUnique(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            int sum = 0;
            for (auto i: nums)
            {
                mp[i]++;
            }
            for (auto m: mp)
            {
                if (m.second == 1)
                    sum += m.first;
            }
            return sum;
        }
};
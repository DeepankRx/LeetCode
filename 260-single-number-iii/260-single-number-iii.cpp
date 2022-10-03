class Solution
{
    public:
        vector<int> singleNumber(vector<int> &nums)
        {
           	//use bit manipulation
            map<int, int> mp;
            vector<int> ans;
            for (auto n: nums)
            {
                mp[n]++;
            }
            for (auto m: mp)
            {
                if (m.second == 1)
                    ans.push_back(m.first);
            }
            return ans;
        }
};
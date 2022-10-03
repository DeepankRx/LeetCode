class Solution
{
    public:
        vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector< int > &nums3)
        {
            set<int> a, b, c;

            for (auto n: nums1) a.insert(n);
            for (auto n: nums2) b.insert(n);
            for (auto n: nums3) c.insert(n);

            map<int, int> mp;
            for (auto n: a) mp[n]++;
            for (auto n: b) mp[n]++;
            for (auto n: c) mp[n]++;

            vector<int> ans;
            for (auto m: mp)
            {
                if (m.second > 1)
                    ans.push_back(m.first);
            }
            return ans;
        }
};
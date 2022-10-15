class Solution
{
    public:
        string frequencySort(string str)
        {
            string ans = "";
            map<char, int> mp;
            for (auto s: str)
            {
                mp[s]++;
            }
            multimap<int, char> mmp;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                mmp.insert(make_pair(it->second, it->first));
            }
            for (auto it = mmp.rbegin(); it != mmp.rend(); it++)
            {
                for (int i = 0; i < it->first; i++)
                {
                    ans += it->second;
                }
            }
            return ans;
        }
};
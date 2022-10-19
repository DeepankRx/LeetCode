class Solution
{
    public:
        int findLeastNumOfUniqueInts(vector<int> &arr, int k)
        {
            unordered_map<int, int> mp;
            vector<int> frq;
            for (auto a: arr)
            {
                mp[a]++;
            }
            for (auto m: mp)
            {
                frq.push_back(m.second);
            }
            sort(frq.begin(), frq.end());
            int i = 0;
            for (i = 0; i < frq.size(); i++)
            {
                if (k >= frq.at(i))
                    k -= frq.at(i);
                else
                    break;
            }
            return frq.size() - i;
        }
};
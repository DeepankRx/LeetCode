class Solution
{
    public:
        vector<string> sortPeople(vector<string> &names, vector<int> &heights)
        {
            map<int, string> mp;
            vector<string> ans;

            int namesSize = names.size();
            for (int i = 0; i < namesSize; i++)
            {
                mp[heights.at(i)] = names.at(i);
            }
            for (auto m: mp)
            {
                ans.push_back(m.second);
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};
class Solution
{
    public:
        char repeatedCharacter(string s)
        {
            unordered_map<char, int> mp;
            for (auto i: s)
            {
                mp[i]++;
                if (mp[i] > 1)
                    return i;
            }
            for (auto m: mp)
            {
                if (m.second > 1)
                    return m.first;
            }
            return '\0';
        }
};
class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            if (s.size() != t.size())
                return false;
            map<char, int> s_map, t_map;
            for (int i = 0; i < s.size(); i++)
            {
                s_map[s[i]]++;
                t_map[t[i]]++;
            }
            for (int i = 0; i < s_map.size(); i++)
            {
                if (s_map[i] != t_map[i])
                    return false;
            }
            return 1;
        }
};
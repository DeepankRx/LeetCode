class Solution
{
    public:
        string removeStars(string s)
        {
            string v;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '*')
                {
                    if (v.size() > 0)
                    {
                        v.pop_back();
                    }
                }
                else
                {
                    v.push_back(s[i]);
                }
            }
            return v;
        }
};
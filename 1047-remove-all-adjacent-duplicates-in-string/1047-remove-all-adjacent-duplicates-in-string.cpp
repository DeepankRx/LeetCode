class Solution
{
    public:
        string removeDuplicates(string s)
        {
            string v;

            for (int i = 0; i < s.length(); i++)
            {
                if (v.size() == 0)
                {
                    v.push_back(s[i]);
                }
                else
                {
                    if (v[v.size() - 1] == s[i])
                    {
                        v.pop_back();
                    }
                    else
                    {
                        v.push_back(s[i]);
                    }
                }
            }
            return v;
        }
};
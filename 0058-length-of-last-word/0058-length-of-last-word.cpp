class Solution
{
    public:
        int lengthOfLastWord(string s)
        {
            int n = s.size();
            int len = 0;
            bool flag = false;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s.at(i) == ' ' && !flag)
                    continue;
                if (flag && s.at(i) == ' ')
                    break;
                else
                {
                    len++;
                    flag = true;
                }
            }
            return len;
        }
};
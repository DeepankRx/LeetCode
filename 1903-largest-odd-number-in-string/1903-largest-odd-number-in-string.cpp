class Solution
{
    public:
        string largestOddNumber(string num)
        {
            int len = num.size();
            string ans = "";
            bool firstOdd = false;
            for (int i = len - 1; i >= 0; i--)
            {
                if (int(num[i] - '0') % 2 == 1)
                {
                    firstOdd = true;
                    ans += num[i];
                    continue;
                }
                if (firstOdd)
                    ans += num[i];
            }
             reverse(ans.begin(), ans.end());
                return ans;
        }
};
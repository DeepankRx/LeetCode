class Solution
{
    public:
        string convertToBase7(int num)
        {
                if(num==0)
                        return "0";
            int rem;
            string ans;
            bool isNegative = num < 0;
            num = isNegative ? abs(num) : num;
            while (num)
            {

                ans.push_back((num % 7) + '0');
                num /= 7;
            }
            reverse(ans.begin(), ans.end());
            if (isNegative)
            {
                ans.insert(ans.begin(), '-');
            }

            return ans;
        }
};
class Solution
{
    public:
        vector<int> nextGreaterElements(vector<int> &nums)
        {
            int n = nums.size();
            int temp, temp2;
            vector<int> ans;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n + i; j++)
                {
                    temp = j;
                    temp2 = j;
                    if (temp > n - 1)
                    {
                        temp %= n;
                    }
                    if (nums.at(temp) > nums.at(i))
                    {
                        ans.push_back(nums.at(temp));
                        break;
                    }
                    if (j == n + i - 1)
                    {
                        ans.push_back(-1);
                        break;
                    }
                }
            }
            return ans;
        }
};
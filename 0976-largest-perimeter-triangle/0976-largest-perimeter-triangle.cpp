class Solution
{
    public:
        int largestPerimeter(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            for (int i = nums.size() - 1; i >= 2; i--)
            {
                if (nums.at(i - 1) + nums.at(i - 2) > nums.at(i))
                {
                    return nums.at(i) + nums.at(i - 1) + nums.at(i - 2);
                }
            }
            return 0;
        }
};
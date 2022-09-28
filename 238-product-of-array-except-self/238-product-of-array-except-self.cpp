class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(n);
            vector<int> left(n, 1);
            vector<int> right(n, 1);

            int lp = nums[0], rp = nums[n - 1];
        
            for (int i = 1; i < n; ++i)
            {
                left[i] = lp;
                lp *= nums[i];
            }

            for (int i = n - 2; i >= 0; --i)
            {

                right[i] *= rp;

                rp *= nums[i];
            }

            for (int i = 0; i < n; i++)
            {
                ans[i] = left[i] *right[i];
            }

            return ans;
        }
};
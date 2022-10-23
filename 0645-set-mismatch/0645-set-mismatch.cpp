class Solution
{
    public:
        vector<int> findErrorNums(vector<int> &nums)
        {
            set<int> st;
            int n = nums.size();
            for (auto n: nums)
            {
                st.insert(n);
            }
            int sum = 0;
            for (auto s: st)
                sum += s;
            int numsSum = accumulate(nums.begin(), nums.end(), 0);

            return {
                numsSum - sum,
                n *(n + 1) / 2 - sum
            };
        }
};
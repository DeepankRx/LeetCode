class Solution
{
    public:
        int minimumDeletions(vector<int> &nums)
        {
            int n = nums.size();
            if (n <= 2)
                return nums.size();
            int max = INT_MIN, min = INT_MAX;
            for (auto i: nums)
            {
                if (i > max)
                    max = i;
                if (i < min)
                    min = i;
            }
            int bothFromStart = 0, bothFromEnd = 0, fromStart, fromEnd;
            bool firstMinVisit = false, firstMaxVisit = false;
            for (int i = 0; i < n; i++)
            {
                if (nums.at(i) == min || nums.at(i) == max)
                {
                    if (firstMinVisit == false)
                    {
                        fromStart = i + 1;
                        firstMinVisit = true;
                    }
                    bothFromStart = i + 1;
                }
            }
            bothFromEnd = n - fromStart + 1;
            fromEnd = n - bothFromStart + 1;
            // cout << bothFromStart << " " << bothFromEnd << " " << fromStart << " " << fromEnd << endl;
            if (bothFromStart <= bothFromEnd && bothFromStart <= fromStart + fromEnd)
                return bothFromStart;
            if (bothFromEnd <= bothFromStart && bothFromEnd <= fromStart + fromEnd)
                return bothFromEnd;
            return fromStart + fromEnd;
        }
};
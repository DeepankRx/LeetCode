class Solution
{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> ans;
            int temp = 0;
            for (int i = 0; i < nums1.size(); i++)
            {
                for (int j = 0; j < nums2.size(); j++)
                {
                    if (nums1.at(i) == nums2.at(j))
                    {

                        for (int k = j; k < nums2.size(); k++)
                        {

                            if (nums2.at(k) > nums1.at(i))
                            {
                                ans.push_back(nums2.at(k));
                                break;
                            }
                            temp = k;
                        }
                        if (temp == nums2.size() - 1)
                        {
                            ans.push_back(-1);
                        }
                    }
                }
            }
            return ans;
        }
};
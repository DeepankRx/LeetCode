class Solution {
    vector<int> nums;
public:
    int ans=0;
    int xorOperation(int n, int start) {
        for(int i=0;i<n;i++)
        {
            nums.push_back(start + 2 * i);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums.at(i);
        }
        return ans;
    }
};
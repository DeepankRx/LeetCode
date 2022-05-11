class Solution {
    vector<vector<int>> result;
    void subset(vector<int> nums,int index,vector<int> ans)
    {
        if(index>=nums.size())
        {
            result.push_back(ans);
            return;
        }
        ans.push_back(nums.at(index));
        subset(nums,index+1,ans);
        ans.pop_back();
        subset(nums,index+1,ans);
    }
    public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        subset(nums,0,ans);
        return result;
    }
};
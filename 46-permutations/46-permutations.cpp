class Solution {

    void permute(vector<int> nums,int index,vector<int> ans,    vector<vector<int>> &result)
    {
        if(nums.size()==index)
        {
            result.push_back(nums);
            return;
        }
        for(int i = index;i<nums.size();i++)
        {
            swap(nums.at(index),nums.at(i));
            permute(nums,index+1,ans,result);
            swap(nums.at(index),nums.at(i));
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        permute(nums,0,ans,result);
        return result;
    }
};
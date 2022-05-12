class Solution {
    void permute(vector<vector<int>>&result,vector<int> nums,vector<int> ans,vector<int> freq)
    {
        if(ans.size()==nums.size())
        {
            result.push_back(ans);
            return;
        }
        for(int i = 0 ; i<nums.size();i++)
        {
            if(!freq[i])
            {
                ans.push_back(nums.at(i));
                freq[i]=1;
                permute(result,nums,ans,freq);
                freq[i]=0;
                ans.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans,freq;
        for(int i = 0;i<nums.size();i++)
        {
            freq.push_back(0);
        }
        permute(result,nums,ans,freq);
        return result;
    }
};
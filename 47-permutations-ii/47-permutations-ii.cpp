class Solution {
    void permute(vector<vector<int>>& result,vector<int> nums,vector<int> ans,vector<int> freq)
    {
        if(ans.size()==nums.size())
        {
            find(result.begin(),result.end(),ans);
            result.push_back(ans);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            
            if(!freq[i])
            {
           
                ans.push_back(nums.at(i));
                freq[i]=1;
                permute(result,nums,ans,freq);
                freq[i]=0;
                ans.pop_back();
                while(i+1<nums.size() && nums.at(i) ==  nums.at(i+1))
                    i++;
            }
          
        }
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>> result;
       vector<int> ans,freq;
        for(int i = 0 ; i< nums.size() ;i++)
        {
            freq.push_back(0);
        }
        permute(result,nums,ans,freq);
        return result;
    }
};
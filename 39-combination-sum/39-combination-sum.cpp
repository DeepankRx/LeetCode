class Solution {
    vector<vector <int>> result;
    void combinationSum(vector<int> candidates,int target,int index,int size,vector<int> ans)
    {
        if(index>=size)
        {
            if(target==0)
                result.push_back(ans);
            return;
        }
        if(candidates.at(index)<=target)
        {
        ans.push_back(candidates.at(index));
        combinationSum(candidates,target-candidates.at(index),index,size,ans);
        ans.pop_back();
        }
      
        combinationSum(candidates,target,index+1,size,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans ;
        combinationSum(candidates,target,0,candidates.size(),ans);
        return result;
    }
};
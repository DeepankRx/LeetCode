class Solution {
    void combine(int n , int k , int index , vector<int>&ans,vector<vector<int>>&result)
    {
        if(ans.size()==k)
        {
            result.push_back(ans);
            return;
        }
        for(int i = index ; i < n+1 ;i++)
        {
            ans.push_back(i);
            combine(n,k,i+1,ans,result);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> ans;
        combine(n,k,1,ans,result);
        return result;
    }
};

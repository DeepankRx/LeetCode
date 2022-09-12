class Solution {
public:
    // Tabulation Method
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        // if nums has only one element then that element will be output
        if(n==1)    return nums[0];
        
        vector<int> dp(n, -1);
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);
        
        for(int i=2; i<n; i++){
            int take = nums[i]+dp[i-2];        //if we take index i then we can't move to index i-1
            int notTake = 0 + dp[i-1];         //here we didn't take index i so we can move to index i-1
            dp[i] = max(take, notTake);
        }
        
        return dp[n-1];
    }
};
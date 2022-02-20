class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int start=0,end=nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--)
        {
            if(abs(nums[start])>abs(nums[end]))
                ans[k]=nums[start]*nums[start++];
            else
                ans[k]=nums[end]*nums[end--];
        }
        return ans;
    }
};

  
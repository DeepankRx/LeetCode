class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowSize = 0,sum=0,ans=INT_MAX,i=0;
        while(windowSize<nums.size())
        {
            sum+=nums[windowSize];
            if(sum<target)
                windowSize++; //6 7
            else
            {
                while(sum>=target)
                {
                    ans = min(ans,windowSize-i+1); //4 6 5 5 2
                    sum-=nums[i]; //6 7 6 7
                    i++; //1 2 3 4
                }
                windowSize++; //5 6
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};
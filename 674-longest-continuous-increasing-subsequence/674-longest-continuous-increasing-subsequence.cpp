class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curCount = 0 , maxCount = 0 ;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums.at(i)<nums.at(i+1))
                curCount++;
            else 
                curCount = 0;
            if(curCount>maxCount)
                maxCount = curCount;
        }
        return maxCount + 1;
    }
};
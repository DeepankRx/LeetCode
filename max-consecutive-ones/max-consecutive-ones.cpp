class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curOne=0,maxOne=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums.at(i)==1)
                curOne++;
            if(curOne>maxOne)
                maxOne = curOne;
            if(nums.at(i)==0)
                curOne=0;
        }
        return maxOne;
    }
};
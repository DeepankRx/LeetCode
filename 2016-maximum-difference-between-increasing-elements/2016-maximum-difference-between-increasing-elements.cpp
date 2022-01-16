class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(),maxDiff=INT_MIN,curDiff=0;
        for(int i=0;i<n;i++)
        {
               for(int j=0;j<n;j++)
               {
                   if(i<j)
                   {
                       curDiff=nums.at(j)-nums.at(i);
                   }
                   if(curDiff>maxDiff)
                       maxDiff=curDiff;
               }
        }
        if(maxDiff==0)
            return -1;
        return maxDiff;
    }
};
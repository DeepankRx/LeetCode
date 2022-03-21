class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0)
            return 0;
        unordered_map<int,int> map;
        int curSum =0;
        int i=0;
        int count =0;
        while(i<n)
        {
            curSum+=nums[i];
            if(curSum==k)
                count++;
            if(map.find(curSum-k)!=map.end())
                count+=map[curSum-k];
            map[curSum]+=1;
            i++;
        }
        return count;
        
    }
};
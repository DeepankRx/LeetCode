class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      int max_ = INT_MIN,min_=INT_MAX;
        int n = nums.size();
        for(int i =1;i<n;i++)
        {
            if(nums.at(i)<nums.at(i-1))
            {
                min_ = min(min_,nums.at(i));
            }
                
        }
        for(int i =n - 2;i>=0;i--)
        {
            if(nums.at(i)>nums.at(i+1))
            {
                max_ = max(max_,nums.at(i));
            }
                
        }
          if(max_ == INT_MIN && min_ == INT_MAX) return 0;
    int start = 0,end = n-1;
        while(start<n)
        {
            if(nums.at(start)>min_)
                break;
            start++;
        }
         while(end>start)
        {
            if(nums.at(end)<max_)
                break;
             end--;
        }
    
    return end-start +1;
        
    }
};
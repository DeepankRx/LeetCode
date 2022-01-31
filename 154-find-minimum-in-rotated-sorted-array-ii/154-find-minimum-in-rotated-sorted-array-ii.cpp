class Solution {
public:
    int findMin(vector<int>& nums) {
         int n=nums.size()-1;
        int start=0,end=n,mid;
        while(start<end)
        {
              mid = start + (end - start)/2;
              if(nums[mid]>nums[end])
                  start= mid+1;
              else if(nums[mid]<nums[end]) 
                  end=mid;
              else
                end--;
        }
        return nums[start];
    }
};
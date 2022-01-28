class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int start=0,end=n,mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums.at(mid)==target)
                return mid;
            if(nums.at(start)<=nums[mid])
            {
                if(target<=nums.at(mid) && target>=nums.at(start))
                    end=mid-1;
                else
                    start=mid+1;
            }
            else
            {
                if(target>=nums.at(mid) && target<=nums.at(end))
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return -1;
    }
};
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int start=0,end=n,mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums.at(mid)==target)
                return true;
            else if(nums.at(mid)>target)
                end--;
            else
                start++;
        }
        return false;
    }
};
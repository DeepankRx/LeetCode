class Solution {
    vector<int> twoSum(vector<int> nums,int start,int end,int target)
    {
        if(start>=end)
        {
            return nums;
        }
            if(nums.at(start)+nums.at(end)==target)
                return {start,end};
            else if(nums.at(start)+nums.at(end)<target)
                return twoSum(nums,start+1,end,target);
            else
                return twoSum(nums,start,end-1,target);
      
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp(nums),result;
        sort(nums.begin(),nums.end());
        vector<int> points = twoSum(nums,0,nums.size()-1,target);
        cout<<points.at(0)<<" "<<points.at(1)<<endl;
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp.at(i)<<" ";
            if(temp[i]==nums.at(points.at(0)) ||temp[i]==nums.at(points.at(1)))
                result.push_back(i);
        }
        return result;
    }
};
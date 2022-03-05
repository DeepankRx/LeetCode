class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums.at(i)==nums.at(i+1))
                temp = nums.at(i);
        }
        return temp;
    }
};
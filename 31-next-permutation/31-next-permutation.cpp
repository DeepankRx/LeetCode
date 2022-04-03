class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1 = -1,ind2=-1;
        for(int i = nums.size()-1;i>0;i--)
        {
            if(nums.at(i)>nums.at(i-1))
            {
                ind1 = i - 1;
                break;
            }
        }
        if(ind1==-1)
        {
             reverse(nums.begin(),nums.end());
            return;
        }
         for(int i = nums.size()-1;i>=0;i--)
        {
            if(nums.at(ind1)<nums.at(i))
            {
                     swap(nums.at(ind1),nums.at(i));
                     reverse(nums.begin()+ind1+1,nums.end());
                        break;
            }
        }
   
    }
};
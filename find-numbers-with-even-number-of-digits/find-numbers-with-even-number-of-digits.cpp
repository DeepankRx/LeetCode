class Solution {
public:
    bool countDigits(int num)
    {
        int count=0;
        while(num)
        {
            count++;
            num/=10;
        }
        if(count%2==0)
            return true;
        else 
            return false;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(countDigits(nums.at(i)))
                count++;
        }
        return count;
    }
};
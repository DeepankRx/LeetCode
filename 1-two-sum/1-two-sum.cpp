class Solution {
public:
       vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        vector<int> nums;
        nums=num;       //create copy of input vector
        vector<int> ans;
        sort(nums.begin(),nums.end());  
        int l=0,r=n-1;
        while(l<r){    //apply two pointer on new vector
            if(nums[l]+nums[r]==target){
                break;
            }
            else if(nums[l]+nums[r]>=target)
                r--;
            else
                l++;
        }
        if(nums[l]!=nums[r]){ //find indexes of two numbers in original input vector, if unequal
                    l=find(num.begin(),num.end(),nums[l])-num.begin();
                    r=find(num.begin(),num.end(),nums[r])-num.begin();
                }
                else{         //if numbers are same, find the next index of number
                    l=find(num.begin(),num.end(),nums[l])-num.begin();
                    r=find(num.begin()+l+1,num.end(),nums[r])-num.begin();
                }
                ans.push_back(l);
                ans.push_back(r);
        return ans;
    }
};
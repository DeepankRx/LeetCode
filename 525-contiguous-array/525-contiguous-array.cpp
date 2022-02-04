// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         int zeroes=0,ones=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums.at(i)==0)
//                 zeroes++;
//             else
//                 ones++;
//         }
//         if(zeroes>ones)
//             return nums.size()-(zeroes-ones);
//         else
//             return nums.size()-(ones-zeroes);
//     }
// };
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
		vector<int> arr(2*nums.size() + 1, INT_MIN);
		arr[nums.size()] = -1;
        int maxLen = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 0 ? -1 : 1);
			if (arr[sum + nums.size()] >= -1)  maxLen = max(maxLen, i - arr[sum + nums.size()]);
			else  arr[sum + nums.size()] = i; 
        }
        return maxLen;
    }
};
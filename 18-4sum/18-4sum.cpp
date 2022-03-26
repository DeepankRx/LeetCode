class Solution {
public:
   
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();  
        sort(nums.begin() , nums.end());  
        vector<vector<int>> ans;  
        set<vector<int>> subAns; 
		
        for(int i = 0 ; i < n; i++){
		
            for(int j = i + 1; j < n ; j++){
			
                int new_target  =  target - nums[i] - nums[j];
                
                int start = j+1 , end = n-1;
                
                while(start < end){
				
                    int sum = nums[start] + nums[end];
                    
                    if(sum > new_target) end--;
                    else if(sum < new_target ) start++;
                    else  {
                        subAns.insert({nums[i] , nums[j] , nums[start] , nums[end]});
                        start++;
                        end--;
                    };
                }
            }
        }
		
        for(auto i : subAns){
            ans.push_back(i);  
        }
		
        return ans;
    }
    
};
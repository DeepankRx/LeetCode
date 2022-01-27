class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k,n =nums.size();
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        
        for(i=0; i<n-2; ++i)
        {
            
            // cout<<l<<"-"<<r<<" ";
            if(i>0)
            {
			//so that we do not get repeated vectors
			//once we had calculated answer for nums[i] we will not calculate that again
                while(i<n && nums[i] == nums[i-1])
                    i++;
            }
            
            int l = i+1, r= n-1;
            cout<<l<<"-"<<r<<" ";
            while(l < r)
            {
                if((nums[i] + nums[l] + nums[r]) < 0)
                    l++;
                else if((nums[i] + nums[l] + nums[r]) > 0)
                    r--;
                else
                {
                    vector<int> vt(3);
                    vt[0] = nums[i];
                    vt[1] = nums[l];
                    vt[2] = nums[r];
                    
                    if(ans.size() == 0)
                        ans.push_back(vt);
                    else if(ans[ans.size() - 1] != vt)
                    ans.push_back(vt);
                    r--;
                    l++;
                }
            }
            
        }
        
        
        
        return ans;
    }
};
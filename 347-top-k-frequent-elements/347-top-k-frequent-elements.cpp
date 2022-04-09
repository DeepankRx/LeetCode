class Solution {
    vector<int> ans;
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         unordered_map<int, int> mp;
            for (int i = 0; i < nums.size(); i++)
                mp[nums[i]]++;
            priority_queue<pair<int,int>> q;
            for(auto x : mp)
            {
                q.push({x.second,x.first});
            }
            for(int i=0;i<k;i++)
            {
                ans.push_back(q.top().second);
                q.pop();
            }
            return ans;
    }
        
};
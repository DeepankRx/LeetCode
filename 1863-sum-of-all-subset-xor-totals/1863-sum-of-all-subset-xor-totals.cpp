class Solution {
public:
    int ans=0;
    vector<int> v;
    void fun(vector<int> &nums,int id){
        int res=0;
        if(v.size()>0){
            res=v[0];
            for(int i=1;i<v.size();i++){
                res=res^v[i];
            }
        }
        ans+=res;
        for(int i=id;i<nums.size();i++){
            v.push_back(nums[i]);
            fun(nums,i+1);
            v.pop_back();
        }
    }
    int subsetXORSum(vector<int>& nums) {
        fun(nums,0);
        return ans;
    }
};
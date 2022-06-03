class Solution {
public:
    int kthFactor(int n, int k) {
        int i ;
        vector<int> ans;
        for(i = 1 ; i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
        if(k>ans.size())
            return -1;
        return ans.at(k-1);
    }
};
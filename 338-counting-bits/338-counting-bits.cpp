class Solution {
public:
    //if i is even than number of 1bits will be res[i]=res[i/2]
    //if i is odd the number of 1bits will be res[i]=res[i-1]+1
    vector<int> countBits(int n) {
        vector<int> res(n);
         res.push_back(0);
        if(n==0)
        {
            return res;
        }
        for(int i = 1;i<=n;i++)
        {
            if(i%2==0)
                res[i]=res[i/2];
            else
                res[i]=res[i-1]+1;
        }
        return res;
    }
};
class Solution {
public:
    bool isSelfDividing(int n)
    {
        int rem,temp=n;
        while(temp)
        {
          rem=temp%10;
            if(rem==0)
                return false;
          if(n%rem!=0)
              return false;
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i=left;i<=right;i++)
        {
            if(isSelfDividing(i))
                ans.push_back(i);
        }
        return ans;
    }
};
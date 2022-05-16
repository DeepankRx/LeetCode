//memoziation (top to bottom)
/*
class Solution {
    int fib(int n,vector<int> &dp)
    {
          if(n<=1)
            return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = fib(n-1,dp) + fib(n-2,dp);
    }
public:
    int fib(int n) {
      vector<int> dp(n+1,-1);
        return fib(n,dp);
    }
};
*/

//tabulation
class Solution {
public:
    int func(int n,vector<int> &dp)
    {
        if(n==0 || n==1)
            return n;
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2;i<=n;i++)
            dp[i] = dp[i-1] + dp[i-2];
        
        return dp[n];
    }
    
    
    int fib(int n) {
        vector<int> dp(n+1,-1);
        
        return func(n,dp);                
    }
};
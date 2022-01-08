class Solution {
public:
    int reverse(int x) {
        long long reverse=0,rem;
        while(x)
        {
            rem=x%10;
            x/=10;
             if(reverse>INT_MAX/10 || reverse<INT_MIN/10) return 0; 
            reverse=(reverse*10)+rem;
        }
        return reverse;
    }
};
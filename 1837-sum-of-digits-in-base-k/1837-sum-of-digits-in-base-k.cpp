class Solution {
public:
    int reverseNumber(int n)
    {
        int reverse=0,rem;
        while(n)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
        }
        return reverse;
    }
    int baseConversion(int n,int k)
    {
       
        int rem,ans=0;
        while(n)
        {
            rem=n%k;
            ans=(ans*10)+rem;
            n/=k;
        }
       
        
        return reverseNumber(ans);
        
    }
    int sumOfDigits(int num)
    {
        int sum=0,rem;
        while(num)
        {
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        return sum;
    }
    int sumBase(int n, int k) {
        return (sumOfDigits(baseConversion(n,k)));
    }
};
class Solution {
public:
    int reverseNum(int n)
    {
        int rem,sum=0;
        while(n)
        {
            rem=n%10;
            sum=(sum*10)+rem;
            n/=10;
        }
       
        return sum;
    }
    bool isSameAfterReversals(int num) {
        int sum;
        sum=reverseNum(num);
        sum=reverseNum(sum);
        cout<<sum<<endl;
        if(sum==num)
            return true;
        return false;
    }
};
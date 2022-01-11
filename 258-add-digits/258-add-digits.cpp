class Solution {
public:
    int countDigit(int n)
    {
        int count=0;
        while(n)
        {
            n/=10;
            count++;
        }
        return count;
    }
    int sumOfDigits(int n)
    {
        int sum=0,rem;
        while(n)
        {
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum;
        if(num==0)
            return 0;
        while(countDigit(num)!=1)
        {
            num=sumOfDigits(num);
        }
        return num;
    }
};
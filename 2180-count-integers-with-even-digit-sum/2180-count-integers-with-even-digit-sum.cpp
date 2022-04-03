class Solution {
    int sumOfDigits(int num)
    {
        int sum = 0, rem , i=0;
        while(num)
        {
            rem = num % 10;
            sum += rem;
            num/=10;
        }
        return sum;
    }
public:
    int countEven(int num) {
        int count = 0,sum;
        for(int i=num;i>=2;i--)
        {
            if(sumOfDigits(i)%2==0)
                count++;
        }
        return count;
    }
};
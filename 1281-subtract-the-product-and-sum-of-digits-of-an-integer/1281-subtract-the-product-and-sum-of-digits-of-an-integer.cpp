class Solution {
public:
    int prodOfN(int n)
    {
        int prod = 1,rem;
        while(n)
        {
            rem = n%10;
            prod*=rem;
            n/=10;
        }
        return prod;
    }
     int sumOfN(int n)
    {
        int sum = 0,rem;
        while(n)
        {
            rem = n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    int subtractProductAndSum(int n) {
        return prodOfN(n) - sumOfN(n);
    }
};
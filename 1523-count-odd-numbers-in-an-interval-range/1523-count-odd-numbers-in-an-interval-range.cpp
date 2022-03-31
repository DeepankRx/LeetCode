class Solution {
public:
    int countOdds(int low, int high) {
        int result=0;
        if(low%2==1 || high%2==1)
            result++;
        result += (high - low)/2;
        return result;
    }
};
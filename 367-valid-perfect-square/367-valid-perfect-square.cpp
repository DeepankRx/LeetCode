class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int i=1,prod=1;
        while(prod<num)
        {
            prod=i*i;
            i++;
        }
        if(prod==num)
            return true;
        return false;
    }
};
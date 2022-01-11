//by using property that sum of square of digits always ends as 1 or 89.
class Solution {
    public:
        bool isHappy(int n) {
            long long cur_val=0,n_num=0;
            while(1)
            {
                n_num=0;
                while(n)
                     {
                        cur_val=n%10;
                         n_num=n_num+cur_val*cur_val;
                        n/=10;  
                            }
                                    n=n_num ;
                            if(n_num==1) return true;
                    if(n_num==89) return false;
                    }
                    return false;
                    }
                    };


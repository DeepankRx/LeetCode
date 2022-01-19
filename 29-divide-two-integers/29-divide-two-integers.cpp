class Solution {
public:
    int divide(int dividend, int divisor) {
    int rez = 0;
    if(dividend == INT_MIN){
        switch( divisor ){
            case -1 : return INT_MAX;break;
            case  1 : return INT_MIN;break;
            case INT_MIN : return 1 ;break;
            case INT_MAX : return -1;break;
            default : if (divisor > 0 ){dividend +=divisor;rez++;}
                        else {dividend -=divisor;rez++;}
        }
    }
        
    if(divisor == INT_MIN) return 0;
        
    int sd=1,sv=1;
    if(dividend < 0) {dividend=-dividend;sd=0;}
    if(divisor < 0) {divisor=-divisor;sv=0;}

    int count = 0;
    int div = divisor;
    int divn = 0;
    int dob =1;
    int dobn = 0;

        while(dividend >= divisor){
            while(dividend >=div ){
                dividend -= div;
                rez += dob;
                divn += div;
                dobn += dob;
                count++;
                if (count == 10){
                    count=0;
                    dob=dobn;dobn=0;
                    div=divn;divn=0;
                    if(dividend-div<0)break;}
            }
              divn = 0;div = divisor;
              dobn = 0; dob =1;
              count=0;
        }
        if(sd != sv) rez=-rez;
        return rez;
    }
};
class Solution {
public:
    int signFunc(int prod)
    {
        if(prod==0)
            return  0;
        else if (prod>0)
            return 1;
        else return -1;
    }
    int arraySign(vector<int>& nums) {
       int prod=1;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums.at(i);
            if(prod<0)
                prod=-1;
            else if(prod>0)
                prod=1;
            else
                prod=0;
        }
        return signFunc(prod);
    }
};
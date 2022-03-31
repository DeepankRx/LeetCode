class Solution {
    vector<int> ans;
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.at(0)==9 && digits.size()==1)
            return {1,0};
        int end = digits.size() - 1, carry=0;
        int n = digits.size() -1;
        if(digits.at(end)!=9)
            digits.at(end)++;
        else
        {
            digits.at(end)=0;
            carry = 1;
            end = end -1;
            while(carry + digits.at(end)>9 && n>1)
            {
                digits.at(end)=0;
                end = end - 1;
                n--;
            }
            if(carry+digits.at(end)<=9)
            {
                 digits.at(end)++;
            }
            else
            {
                digits.at(end)=0;
                 digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};
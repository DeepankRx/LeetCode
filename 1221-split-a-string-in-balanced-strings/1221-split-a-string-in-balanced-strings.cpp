class Solution {
public:
    int balancedStringSplit(string s) {
        int balance=0,count=0,i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='L')
                balance++;
            else
                balance--;
            if(balance==0)
                count++;
           i++;
        }
         return count;
    }
};
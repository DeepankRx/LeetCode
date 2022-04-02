class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0,end = s.size() - 1,skip=0;
        while(start<=end)
        {
           
           
          if(s.at(start)==s.at(end))
          {
            start++;
            end--;
          }
            else
            {
                start++;
                skip++;
            }
        }
           start = 0,end = s.size() - 1;
        int skip2=0;
        while(start<=end)
        {
           
          if(s.at(start)==s.at(end))
          {
            start++;
            end--;
          }
            else
            {
                skip2++;
                end--;
            }
        }
        if(skip==0 || skip2==0)
        return true;
        if(skip==1 || skip2==1)
            return true;
        return false;
    }
};
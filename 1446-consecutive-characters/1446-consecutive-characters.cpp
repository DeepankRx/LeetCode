class Solution {
public:
    int maxPower(string s) {
      int currMax = 1 , max = INT_MIN;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]==s[i+1])
                currMax++;
            else
                currMax = 1;
            if(currMax>max)
                max = currMax;
        }
        return max;
    }
};
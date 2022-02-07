class Solution {
public:
    char findTheDifference(string s, string t) {
     int ans,sumOfS=0,sumOfT=0;
        for(int i=0;i<s.size();i++)
        {
            sumOfS+=s[i];
        }
         for(int i=0;i<t.size();i++)
        {
            sumOfT+=t[i];
        }
        ans = sumOfT-sumOfS;
        return ans;
    }
};
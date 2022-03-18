class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,maxCount=INT_MIN;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                count++;
        }
        if(count>maxCount)
            maxCount = count;
        for(int i=k;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                count++;
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='o' || s[i-k]=='i' || s[i-k]=='u')
                count--;
            if(count>maxCount)
                maxCount = count;
        }
        return maxCount;
    }
};
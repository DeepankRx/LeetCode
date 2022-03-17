class Solution {
public:
    bool checkInclusion(string p, string s) {
          vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        int window = p.size();
        int len = s.size();
        if(len<window)
            return false;
        int left = 0,right = 0;
        //for first time only
        while(right<window)
        {
            phash[p[right]-'a'] +=1;
            hash[s[right++]-'a'] +=1;
        }
        right -=1;
        while(right<len)
        {
            if(phash == hash)
                return true;
            right+=1;
            if(right!=len)
                hash[s[right]-'a'] +=1;
            hash[s[left]-'a'] -=1;
            left+=1;
        }
        return false;
    }
};
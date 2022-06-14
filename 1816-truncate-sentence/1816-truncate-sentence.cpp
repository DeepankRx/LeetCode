class Solution {
public:
    string truncateSentence(string s, int k) {
        string str="";
        int i =0;
        while(k && s[i]!='\0')
        {
            str.push_back(s[i++]);
            if(s[i]==' ')
                k--;
        }
        return str;
    }
};
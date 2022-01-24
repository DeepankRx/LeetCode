class Solution {
public:
bool detectCapitalUse(string word) {
        
        if(word[0] >= 'A' && word[0] <= 'Z')
            return (allLow(word.substr(1)) || allHigh(word.substr(1)));
        else
            return allLow(word.substr(1));
            
    }
    
    bool allLow(string word)
    {
        for(char ch : word)
            if(ch >= 'A' && ch <= 'Z')
                return false;
            
        return true;
    }
        
    bool allHigh(string word)
    {
        for(char ch : word)
            if(ch >= 'a' && ch <= 'z')
                return false;
        return true;
    }
};
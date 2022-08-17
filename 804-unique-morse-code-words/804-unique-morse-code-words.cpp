class Solution {
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> morseCodeString;
        for(auto word:words)
        {
            string temp="";
            for(auto letter : word)
            {
                temp+=morse[letter-'a'];
            }
            morseCodeString.insert(temp);
        }
    
     
        return morseCodeString.size();
    }
};
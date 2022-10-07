class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
            for(int i=0;i<sentence.size();i++)
            {
                    mp[sentence[i]]++;
            }
            return mp.size() == 26;
    }
};
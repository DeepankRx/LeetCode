class Solution
{
    bool isPairAnagram(string word1, string word2)
    {
        if (word1.size() != word2.size())
            return false;
        unordered_map<char, int> mp1, mp2;
        for (auto w: word1)
        {
            mp1[w]++;
        }
        for (auto w: word2)
        {
            mp2[w]++;
        }
        return mp1 == mp2;
    }
    public:
        vector<string> removeAnagrams(vector<string> &words)
        {
            int n = words.size();
            for (int i = n - 1; i > 0; i--)
            {
                if (isPairAnagram(words.at(i), words.at(i - 1)))
                {
                    words.erase(words.begin() + i);
                }
            }
            return words;
        }
};
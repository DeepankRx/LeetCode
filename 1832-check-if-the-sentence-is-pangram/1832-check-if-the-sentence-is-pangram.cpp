class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            set<char> st;
            if (sentence.size() < 26)
                return false;
            for (auto s: sentence)
                st.insert(s);
            return st.size() == 26;
        }
};
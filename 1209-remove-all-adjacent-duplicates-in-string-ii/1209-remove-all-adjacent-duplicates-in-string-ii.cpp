class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n<k) return s;
        stack<pair<char,int>> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty() || st.top().first !=s[i])
            {
                st.push({s[i],1});
            }
            else
            {
                auto prev = st.top();
                st.pop();
                st.push({s[i],prev.second+1});
            }
            if(st.top().second==k) st.pop();
        }
        string ans = "";
        while(!st.empty())
        {
            auto cur = st.top();
            st.pop();
            while(cur.second--)
            {
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
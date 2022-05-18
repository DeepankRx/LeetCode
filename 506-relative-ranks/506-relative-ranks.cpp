class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         map<int, string>::iterator itr;
        vector<int> copy;
        for(int i =0;i<score.size();i++)
            copy.push_back(score.at(i));
        sort(copy.begin(),copy.end(),greater<int>());
        map<int,string> mp;
        if(copy.size()>=1)
            mp.insert(pair<int,string>(copy.at(0),"Gold Medal"));
        if(copy.size()>=2)
            mp.insert(pair<int,string>(copy.at(1),"Silver Medal"));
        if(copy.size()>=3)
            mp.insert(pair<int,string>(copy.at(2),"Bronze Medal"));
        for(int i = 3;i<copy.size();i++)
        {
            mp.insert(pair<int,string>(copy.at(i),to_string(i+1)));
        }
        vector<string> ans;
        for(int i = 0;i<score.size();i++)
        {
            ans.push_back(mp.find(score.at(i))->second);
        }
            
        return ans;
    }
};
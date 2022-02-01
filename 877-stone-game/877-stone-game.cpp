class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int alice=0,bob=0;
        for(int i=0;i<piles.size();i++)
        {
            if(i%2==0)
                alice+=piles.at(i);
            else
                bob+=piles.at(i);
        }
        if(alice>bob)
            return true;
        return false;
    }
};
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        if(pref.size()==1)
                return pref;
            int n = pref.size();
            int temp = pref.at(0);
            int k = 0;
            vector<int> ans;
            ans.push_back(temp);
            vector<int> vis(n,0);
            for(int i = 1 ; i < n  ; i++)
            {          
                    // for(int j = 1 ; j  < 10e6 ; j++)
                    // {   
                            // if((temp^j)==pref.at(i) && vis[i]==0)
                            // {   
                    ans.push_back((pref.at(i-1)^pref.at(i)));
                                  
                            //         vis[i]=1;
                            //         break;
                            // }
                    // }
            }
            return ans;
    }
};
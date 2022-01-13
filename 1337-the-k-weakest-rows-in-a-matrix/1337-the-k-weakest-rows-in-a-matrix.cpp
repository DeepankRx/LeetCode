class Solution {
public:
    void printVector(vector<int> v)
    {
        cout<<"Vector Is : ";
        for(int i=0;i<v.size();i++)
            cout<<v.at(i)<<" ";
        cout<<endl;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> soldierCount;
        vector<int> index;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            soldierCount.push_back(count*1000+i);
        }
        sort(soldierCount.begin(),soldierCount.end());
        for(int i=0;i<k;i++)
        {
            index.push_back(soldierCount.at(i)%1000);
        }
        return index;
    }
};
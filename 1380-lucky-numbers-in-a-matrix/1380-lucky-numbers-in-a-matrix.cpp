class Solution {
public:
    void printVector(vector<int> v)
    {
        cout<<"Vector Is :";
        for(int i=0;i<v.size();i++)
            cout<<v.at(i)<<" ";
        cout<<endl;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minimum;
        vector<int> maximum;
          vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {  
                    int mini=matrix[i][0];
                    
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<mini)
                    mini=matrix[i][j];
            }
            minimum.push_back(mini);
             
        }
           for(int i=0;i<matrix[0].size();i++)
        {  
                    int maxi=matrix[0][i];
                    
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[j][i]>maxi)
                    maxi=matrix[j][i];
            }
            maximum.push_back(maxi);
             
        }
        for(int i=0;i<minimum.size();i++)
        {
            for(int j=0;j<maximum.size();j++)
            {
                if(minimum[i]==maximum[j])
                {
                   
        ans.push_back(minimum[i]);
        return ans;
                }
            }
        }
       return ans;
      
    }
};
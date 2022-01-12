class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       
        vector<vector<int>> matrix;
         if(original.size()>m*n || original.size()<m*n)
             return matrix;
        vector<int> semi;
        int k=0;
      for(int i=0; i<m; i++)
{
    matrix.push_back(vector<int>());
    for(int j=0; j<n; j++)
    {    
        matrix[i].push_back(original[k]);  
        k++;
    }
}
        return matrix;
    }
};
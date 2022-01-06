class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat[0].size();i++)
        {
            sum+=mat[i][i];  
            sum+=mat[i][mat[0].size()-1-i];
        }
        if(mat[0].size()%2==1)
        {
            sum=sum-mat[mat[0].size()/2][mat[0].size()/2];
        }
       return sum;
    }
};
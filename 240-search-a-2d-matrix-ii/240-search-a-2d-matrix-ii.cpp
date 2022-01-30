class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size()-1;
        int i=0,j=col;
        while(i<row && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if( matrix[i][j]<target)
                    i++;
            else 
                j--;
        }
        return false;
    }
};
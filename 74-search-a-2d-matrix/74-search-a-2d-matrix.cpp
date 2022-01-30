class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int row=matrix.size();
      int col = matrix[0].size();
        if(col==0) return false;
      int start=0,end=(row*col) -1,mid;
        while(start<=end)
        {
           mid = start + (end -start)/2;
           int mid_in_matrix = matrix[mid/col][mid%col];
            if(mid_in_matrix==target)
                return true;
            else if(mid_in_matrix<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return false;
    }
};
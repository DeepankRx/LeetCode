class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size()-1,i=0;
        while(i < len && arr[i] < arr[i+1])
        {
            i++;
        }
        if (i == len|| i == 0)
          {
               return false;
          }
          while (i < len  && arr[i] > arr[i + 1])
          {
               i++;
          }
          if (i == len)
          {
               return true;
          }
          else
          {
               return false;
          }
    }
};
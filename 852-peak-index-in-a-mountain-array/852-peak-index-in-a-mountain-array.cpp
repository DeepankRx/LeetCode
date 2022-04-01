class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = arr.at(0),index=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr.at(i)>max)
            {
                max = arr.at(i);
                index=i;
            }
        }
        return index;
    }
};
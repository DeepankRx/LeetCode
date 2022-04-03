class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr.at(0) - arr.at(1);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr.at(i)-arr.at(i+1)!=d)
            return false;
        }
        return true;
    }
};
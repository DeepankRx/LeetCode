class Solution {
public:
     int getWinner(vector<int>& arr, int k) {
        int cur = arr[0], count = 0;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > cur) {
                cur = arr[i];
                count = 0;
            }
            count++;
            if (count == k) break;
        }
        return cur;
    }
    
};
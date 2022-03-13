class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n, mid, result;
        
        while (start <= end) {
            mid = start + (end - start) / 2;
            result = guess(mid);
            
            if (result == 0) return mid;
            if (result < 0) end = mid - 1;
            else start = mid + 1;
        }
        
        return start;
    }
};
class Solution {
public:
    bool isPerfectSquare(int num) {
      int start = 0,end = num;
        while(start<=end)
        {
           long long int mid = start + (end - start) / 2;
            if(num==mid*mid)
            {
                return true;
            }
            else if(mid*mid<num)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
    }
};
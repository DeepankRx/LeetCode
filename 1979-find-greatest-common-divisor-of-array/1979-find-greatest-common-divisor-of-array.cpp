class Solution {
public:
    int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
    int findGCD(vector<int>& a) {
      int min=  *min_element(a.begin(), a.end());
      int max=  *max_element(a.begin(), a.end());
        return gcd(min,max);
    }
};
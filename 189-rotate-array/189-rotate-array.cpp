class Solution {
public:
    void rotate(vector<int>& a, int k) {
        k=k%a.size();
         reverse(a.begin(),a.end());
         reverse(a.begin(),a.begin()+k);
            reverse(a.begin()+k,a.end());
    }
};
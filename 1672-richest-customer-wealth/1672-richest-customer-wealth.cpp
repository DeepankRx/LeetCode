// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& arr) {
//         int max=0;
//         for(int i=0;i<arr.size();i++)
//         {   int sum=0;
//             for(int j=0;j<arr[i].size();j++)
//             {
//                 sum+=arr[i][j];
//             }
//             if(sum>max)
//                 max=sum;
            
//         }
//         return max;
//     }
// };

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0 ;
        
        for(int i=0 ; i<accounts.size(); i++){
            int currsum=0 ;
            for(int j=0 ; j<accounts[i].size(); j++){
                currsum+=accounts[i][j] ;
            }
            maxsum=max(maxsum, currsum) ;
        }
        
        return maxsum ;
    }
};
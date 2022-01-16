// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size(),minimum,maximum,curProfit=0,maxProfit=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             minimum=prices.at(i);
//             maximum=*max_element(prices.begin()+i,prices.end());
//             curProfit=maximum-minimum;
//             if(curProfit>maxProfit)
//                 maxProfit=curProfit;
//         }
//         return maxProfit;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minelem=prices[0];
        for(int i=1;i<prices.size();i++){
           minelem=min(prices[i],minelem);
            profit=max(profit,(prices[i]-minelem));
        }
        return profit;
    }
};
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> hashmap(501,0);
        int curMax = 0,max=-1;
        for(int i = 0;i<arr.size();i++)
        {
            hashmap.at(arr.at(i))++;
        }
        for(int i = 0;i<hashmap.size();i++)
        {
            if(hashmap.at(i)==i && hashmap.at(i)!=0 )
            {
                curMax = i;
                if(curMax>max)
                    max=curMax;
            }
        }
            return max;
    }
};
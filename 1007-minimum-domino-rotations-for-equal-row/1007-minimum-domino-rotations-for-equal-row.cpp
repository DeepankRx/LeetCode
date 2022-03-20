class Solution {
    int maxFreq(vector<int> arr) {
    //using moore's voting algorithm
    int res = 0,n=arr.size()-1;
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[res]) {
            count++;
        } else {
            count--;
        }
         
        if(count == 0) {
            res = i;
            count = 1;
        }
         
    }
     
    return arr[res];
}
    int countMaxElementFreq(vector<int> arr,int target)
    {
        int count = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr.at(i)==target)
                count++;
        }
        return count;
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int topsEle = maxFreq(tops);
        int temp,count=0;
        int bottomsEle = maxFreq(bottoms);
        int topEleFreq =    countMaxElementFreq(tops,topsEle);
        int bottomEleFreq = countMaxElementFreq(bottoms,bottomsEle);
        if(topEleFreq>bottomEleFreq)
        {
            for(int i=0;i<tops.size();i++)
            {
                if(tops.at(i)!=topsEle)
                {
                    if(bottoms.at(i)==topsEle)
                    {
                        tops.at(i)=topsEle;
                        count++;
                    }
                }
            }
            for(int i=0;i<tops.size();i++)
            {
                cout<<tops.at(i)<<" ";
            }
             int ans = countMaxElementFreq(tops,topsEle);
            if(ans==tops.size())
                return count;
        }
        else
        {
            for(int i=0;i<bottoms.size();i++)
            {
                if(bottoms.at(i)!=bottomsEle)
                {
                    if(tops.at(i)==bottomsEle)
                    {
                        bottoms.at(i)=bottomsEle;
                        count++;
                    }
                }
            }
            int ans = countMaxElementFreq(bottoms,bottomsEle);
            if(ans == bottoms.size())
                return count;
        }
        
        return -1;
    }
};
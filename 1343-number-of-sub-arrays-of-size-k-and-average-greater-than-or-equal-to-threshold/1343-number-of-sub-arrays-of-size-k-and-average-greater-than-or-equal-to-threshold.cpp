class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int avg =0 ,  i = 0 ,sum=0,ans=0;
        for(int i = 0;i<k;i++)
            sum+=arr[i];
        avg=sum/k;
        if(avg>=threshold)
            ans++;
        for(int i=k;i<arr.size();i++)
        {
            sum -= arr[i-k];
            sum += arr[i];
            avg = sum / k;
            if(avg>=threshold)
                ans++;
        }
        return ans;
    }
};
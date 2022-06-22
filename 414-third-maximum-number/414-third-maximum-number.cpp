class Solution {
    bool find(vector<int> nums,int ele)
    {
        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(nums.at(i)==ele)
                return true;
        }
        return false;
    }
    void merge(vector<int> &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1);
    vector<int> R(n2);
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)
            return nums.at(0);
        if(nums.size()==2)
            return nums.at(0)>nums.at(1)?nums.at(0):nums.at(1);
        vector<int> arr;
        for(int i = 0;i<nums.size();i++)
        {
            if(!find(arr,nums.at(i)))
                arr.push_back(nums.at(i));
        }
        if(arr.size()==1)
            return arr.at(0);
        if(arr.size()==2)
            return arr.at(0)>arr.at(1)?arr.at(0):arr.at(1);
       mergeSort(arr,0,arr.size()-1);
        return arr.at(2);
    }
};
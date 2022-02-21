class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int start=0,end=numbers.size()-1;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers.at(start)+numbers.at(end)==target)
            {
                break;
            }
            else if(numbers.at(start)+numbers.at(end)<target)
            {
                start++;
            }
              else if(numbers.at(start)+numbers.at(end)>target)
            {
                end--;
            }
            if(start==end)
            {
                  ans.push_back(-1);
                    ans.push_back(-1);
            }
        }
            ans.push_back(start+1);
            ans.push_back(end+1);
        return ans;
    }
};
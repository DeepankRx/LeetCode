class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start = 0 ,end = people.size()-1,count=0;
        while(start<=end)
        {
            int sum =   people.at(start)+people.at(end);
            if(sum<=limit)
            {
                count++;
                start++;
                end--;
            }
            else if(sum>limit)
            {
                end--;   
                count++;
            }
        }
        return count;
    }
};
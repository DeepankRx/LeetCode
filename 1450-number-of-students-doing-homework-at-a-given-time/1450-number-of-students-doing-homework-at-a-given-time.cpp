class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
     int count=0;
        for(int i=0;i<startTime.size();i++)
        { 
            // lowerLimit < no && no < upperLimit
            if(startTime.at(i)<=queryTime && endTime.at(i)>=queryTime)
                count++;
        }
        return count;
    }
};
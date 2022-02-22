class Solution {
public:
    void reverseString(vector<char>& s) {
       int start=0,end=s.size()-1;
        char temp;
        while(start<end)
        {
            temp=s.at(start);
            s.at(start)=s.at(end);
            s.at(end)=temp;
            start++;
            end--;
        }
    }
};
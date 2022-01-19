class Solution {
public:
    bool squareIsWhite(string c) {
        int x = c[0]-'a'+1;
        int y = c[1]-'1'+1;
        cout<<y << "\n ";
        if((x+y)%2==0)
        return false;
        return true;
    }
};
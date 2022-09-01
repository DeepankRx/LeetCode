class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
            int i = 0;
            while(n[i]!='\0')
            {
                    if(n[i]=='6')
                    {
                            n[i]='9';
                            break;
                    }
                    i++;
            }
           num = stoi(n);
            return num;
    }
};
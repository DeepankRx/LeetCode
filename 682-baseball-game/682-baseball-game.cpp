class Solution {
public:
    int calPoints(vector<string>& ops) {
       int pos =-1,sum=0;
        vector<int> ans;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i] == "+")
            {
                ans.push_back(ans[pos] + ans[pos-1]);
                pos++;
            }
            else if(ops[i] == "C")
            {
                ans.pop_back(); 
                pos--;
            }
            else if(ops[i] == "D")
            {
                ans.push_back((ans[pos])*2);
                pos++;
            }
            else
            {
                ans.push_back(stoi(ops[i]));
                pos++;
            }
        }
        
        for(int i=0;i<ans.size();i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
};
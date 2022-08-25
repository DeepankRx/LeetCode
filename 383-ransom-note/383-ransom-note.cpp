class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
         sort(magazine.begin(),magazine.end());
        int i = 0;
        int j = 0;
        while(magazine[j]!='\0')
        {
            if(ransomNote[i]==magazine[j])
            {
                i++;
                j++;
                cout<<i<<" "<<j<<endl;
            }
            else
            {
                j++;
                cout<<j<<endl;
            }
        }
       if(i<ransomNote.size()) return false; 
        return true;
        
    }
};
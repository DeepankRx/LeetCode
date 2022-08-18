class Solution {
  public:
    int minSetSize(vector < int > & vec) {
        set<int> s;
      map < int, int > freq;
      for (int const & i: vec) {
        freq[i]++;
      }
        vector<int> freqArr;
    for(auto i : freq)
    {
        freqArr.push_back(i.second);
    }
        sort(freqArr.begin(),freqArr.end(),greater<int>());
        for(auto i : freqArr)
        {
            cout<<i <<endl;
        }
        int count = 0;
        int sum = 0;
        for(int i = 0 ; i < freqArr.size() ;i++)
        {
           if(sum<vec.size()/2)
           {
               sum+=freqArr.at(i);
               count++;
           }
            else
            {
                return count;
            }
        }
        return count;
    }
};
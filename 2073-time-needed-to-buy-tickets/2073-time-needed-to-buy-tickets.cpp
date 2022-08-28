class Solution
{
    public:
        int timeRequiredToBuy(vector<int> &tickets, int k)
        {
            int time = 0;
            while (true)
            {
              for(int i = 0 ; i < tickets.size() ; i++)
              {
                      if(tickets.at(i)==0)
                              continue;
                      tickets.at(i)-=1;
                      time+=1;
                      if(tickets[k]==0)
                              return time;
              }
            }
            return time;
        }
};
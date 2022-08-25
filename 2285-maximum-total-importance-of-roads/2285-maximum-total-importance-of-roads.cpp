class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> indegree(n,0) ;
        for(int i=0; i<roads.size(); i++){
            int u = roads[i][0] ;
            int v = roads[i][1] ;
            
            indegree[u]++ ;
            indegree[v]++ ;
        }
        
        vector<int> frq(n,0);
        int maxFindCount = 0;
        int temp = n;
        int index = 0;
        
      // while(maxFindCount<indegree.size())
      // {
      //  int max = 0 ;
      //     for(int i=0 ; i < indegree.size();i++)
      //     {
      //         if(indegree[i]>max)
      //         {
      //             max = indegree[i];
      //             index = i;
      //         }              
      //     }
      //       indegree[index]=INT_MIN;
      //     if(frq[index]==0)
      //     frq[index]=temp;
      //     temp--;
      //     maxFindCount++;
      // }
         priority_queue<pair<int,int>> q;
        for(int i = 0 ; i < indegree.size() ;i++)
        {
            q.push({indegree[i],i});
        }
        while(!q.empty())
        {
            frq[q.top().second]=temp;
            temp--;
            q.pop();
        }
        
        
        long long sum = 0;
        for(int i = 0 ; i < roads.size() ; i++)
        {
            sum += frq[roads[i][0]] + frq[roads[i][1]];
        }
     return sum;   
    }
};
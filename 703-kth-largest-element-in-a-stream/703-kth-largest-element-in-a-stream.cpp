class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>> q;
    int k;
    
    KthLargest(int k1, vector<int>& a) {
        k=k1;
        int i,n=a.size();
        
        for(i=0;i<n;i++)
        {
            q.push(a[i]);
            
            if(q.size()>k)
                q.pop();
        }
    }
    
    int add(int val) {
        q.push(val);
            
        if(q.size()>k)
            q.pop();
        
        return q.top();
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left,right;
      int maxL=INT_MIN,sum=0;
          int maxR=INT_MIN;
        for(int i=0;i<height.size();i++)
        {   
            maxL=max(maxL,height.at(i));
            left.push_back(maxL);
        }
         for(int i=height.size()-1;i>=0;i--)
        {   
            maxR=max(maxR,height.at(i));
            right.push_back(maxR);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<height.size();i++)
        {
            sum+=min(right.at(i),left.at(i))-height.at(i);
        }
        for(int i=0;i<left.size();i++)
            cout<<left.at(i)<<" ";
        cout<<endl;
        for(int i=0;i<left.size();i++)
            cout<<right.at(i)<<" ";
        return sum;
    }
};
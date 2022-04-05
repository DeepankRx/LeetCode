class Solution {
public:
    int maxArea(vector<int>& height) {
     int start=0,end=height.size()-1,maxProd=0,curProd,minimumHeight,width;
        while(start<=end)
        {   width=end-start;
            minimumHeight=min(height.at(start),height.at(end));
            curProd=width*minimumHeight;
         
         
            if(curProd>maxProd)
                maxProd=curProd;
            if(height.at(start)>height.at(end))
            {
                
                end--;
            }
            else if(height.at(start)<height.at(end))
            {
                start++;
            }
            else
            {
                start++;
                end--;
            }
        }
                return maxProd;
    }

};
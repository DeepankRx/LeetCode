class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin() , people.end()) ;
        int low=0;
        int high=people.size()-1 ;
        
        int count=0;
        
        while(low<=high){
            int sum=people[low] + people[high] ;
            
            if(sum <= limit){
                count++ ;
                high-- ;
                low++ ;
            }
            else if(sum > limit){
                count++ ;
                high-- ;
            }
        }
        return count ;
    }
};
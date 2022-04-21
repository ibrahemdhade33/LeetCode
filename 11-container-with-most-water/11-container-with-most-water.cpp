class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0 ,j=height.size()-1 ;
        vector<int>area ; 
        while(i<j){
            int x = min(height[j],height[i]) ; 
            area.push_back(x*(j-i)) ; 
            if(height[i]<height[j])
                i++ ;
            else 
                j-- ;
        }
        
     for(auto i : area){
         cout << i <<" " ;
     }
        
        return *max_element(begin(area), end(area)) ;
    }
};
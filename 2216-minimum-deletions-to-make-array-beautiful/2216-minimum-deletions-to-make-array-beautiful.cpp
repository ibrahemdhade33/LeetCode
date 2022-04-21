class Solution {
public:
   
    int minDeletion(vector<int>& nums) {
         int cnt=0 ; 
       
        
         int sz=nums.size() ;
        if(sz==0 || sz==1)
            return sz ; 
       for(int i=1 ;i<nums.size();i++){
            if((i-1-cnt)%2==0 && nums[i]==nums[i-1]){
                cnt++; 
                sz-- ;
               
            }
    }
        if(sz%2==1)
            cnt++ ;
        return cnt ; 
    }
};
class Solution {
public:
    bool validPalindrome(string s) {
        if(s=="")
            return false;
        else if(s.size()==2)
            return true ; 
        
       int i=0 ,j=s.size()-1 ; 
        while(i<=j){
            if(s[i]==s[j]){
                i++ ;
                j--; 
            }
            else {
                return ispal(s,i+1,j) || ispal(s,i,j-1) ;
            }
        }
        return true ; 
    }
    bool ispal(string s ,int i ,int j){
        while(i<=j){
            if(s[i]==s[j]){
                j-- ; 
                i++; 
            }
            else {
                return false ; 
            }
        }
        return true ;
    }
};
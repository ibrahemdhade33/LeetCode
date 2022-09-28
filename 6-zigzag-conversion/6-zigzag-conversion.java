/*
 * @lc app=leetcode id=6 lang=java
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
    public String convert(String s, int numRows) {
        if(numRows==1)
            return s ; 
        int n = s.length() ; 
        
        List<StringBuilder> rows = new ArrayList<>();
        for (int i = 0; i < numRows; i++)
                rows.add(new StringBuilder());
        
        numRows-- ; 
        int cnt=0,f=0; 

        
        for(int i=0 ; i < n ; i++){
            rows.get(cnt).append(s.charAt(i));
            if(cnt==0)
                f=0 ; 
            if(cnt==numRows)
                f=1 ; 
            if(f==1)
                cnt-- ; 
            if(f==0)
                cnt++ ; 
            
        }
        StringBuilder r = new StringBuilder();
        for(int i=0 ;i < numRows+1 ;i++){
            r.append(rows.get(i)) ; 
        }
        return r.toString() ; 
    }
}
// @lc code=end


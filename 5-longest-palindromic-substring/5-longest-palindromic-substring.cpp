/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size() ; 
        int dp[n][n] ; 
        int mx =1 ; 
        int start = 0 ; 
        memset(dp,0,sizeof(dp)) ; 
        for(int i =0 ; i < n ; i ++)
            dp[i][i] =1 ; 
        for(int i=0 ; i < n-1; i++)
            if (s[i]==s[i+1])   
            {
                dp[i][i+1] = 1 ;
                start = i ; 
                mx =2 ;  
            }
            
        for(int k = 3 ;k<=n;k++){
            for(int i=0 ;i<=n-k;i++){
                if(dp[i+1][i+k-2] && s[i]==s[i+k-1]){
                    dp[i][i+k-1]=1 ;
                    if(k>mx){
                        start=i ; 
                        mx = k ; 
                    }

                }
            }
            }
            return s.substr(start,mx) ;
    }
};
// @lc code=end


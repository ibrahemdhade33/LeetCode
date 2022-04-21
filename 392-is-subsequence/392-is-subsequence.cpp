class Solution {
int dp[101][10001] ;
int is_sub(string s , string t , int n , int m){
    if(dp[n][m]!=-1)
        return dp[n][m] ; 
    if(s[n-1] == t[m-1])
        return dp[n][m] = 1+ is_sub(s,t,n-1,m-1) ; 
    else 
        return dp[n][m] = max(is_sub(s,t,n-1,m) , is_sub(s,t,n,m-1)) ;  
   
}
public:
    bool isSubsequence(string s, string t) {
        memset(dp,-1,sizeof(dp)) ; 
        for(int i =0 ; i < 10001;i++)
            dp[0][i] =0 ; 
          for(int i =0 ; i < 101;i++)
            dp[i][0] =0 ; 
     is_sub(s,t,s.size(),t.size()) ;
    return dp[s.size()][t.size()] == s.size() ;
    }
};
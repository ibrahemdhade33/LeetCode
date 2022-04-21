class Solution {
 void dfs(int x, int y , vector<vector<char>>& grid ,int m , int c ){
   
     if(x < 0 || y < 0 || x >= m || y >= c || grid[x][y] == '0' || grid[x][y] =='2')
         return ;
     grid[x][y] = '2' ; 
    dfs( x,  y+1 ,  grid , m , c ) ; 
         dfs( x,  y -1 ,  grid ,m , c) ; 
         dfs( x+1,  y ,  grid , m , c) ; 
         dfs( x-1 ,  y ,  grid , m ,c) ; 
 }
public:
    int numIslands(vector<vector<char>>& grid) {
  ios_base::sync_with_stdio(false);
        cin.tie(NULL);
           int m = grid.size() ; 
              if(m==0)
                  return 0 ; 
        int c = grid[0].size() ; 
        int n = 0 ; 
       
        
        for(int i = 0; i< m ;i++){
            for(int j = 0 ; j < c ; j++){
                
                if(grid[i][j] =='1' && grid[i][j]!='2'){
                         dfs(i,j,grid , m , c);
                          n++ ;  
                }
            }
            
        }
         return n ;  
    }
  
};
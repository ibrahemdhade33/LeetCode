/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>>ans ; 
        if(root==NULL)
            return ans ; 
         queue<TreeNode*>q ; 
        q.push(root) ; 
        int cnt =0 ; 
        int sz=0 ; 
        for(;!q.empty(),sz=q.size();){
            vector<int>temp(sz);
            int i=0 ; 
            
            
            while(sz--){
               
                TreeNode *cur = q.front() ;
                q.pop() ; 
                if(cnt%2==0){
                    temp[i]=cur->val ; 
                    ++i;
                   }
                else{
                    temp[sz] = cur->val ;
                    cout << cur->val <<endl; 
                    }
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            cnt++ ; 
            
            ans.push_back(temp) ; 
        }
        return ans ; 
    }
};
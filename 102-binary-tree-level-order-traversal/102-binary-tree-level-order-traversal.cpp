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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans ; 
        if(root==NULL)
            return ans ; 
        queue <TreeNode*>q ; 
        q.push(root); 
        vector<int>temp ; 
       int sz=0 ;
        for(;!q.empty(),sz=q.size();){
        while(sz--){
            //cout << q.size() << endl ;
            TreeNode *cur = q.front() ; 
            q.pop();
           
          
            
                cout << cur->val <<endl ; 
                temp.push_back(cur->val) ;
                if(cur->left!=NULL){
                    q.push(cur->left) ; 
                }
                if(cur->right!=NULL){
                    q.push(cur->right) ; 
                }
            
            
        }
            
                ans.push_back(temp) ; 
                temp.clear() ;
            
        }
        return ans ; 
    }
};
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

    // AYUSH 
    
 class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if ( !root ) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> temp ;
            for ( int i = 0 ; i < sz ; i ++){
                root = q.front();
                q.pop();
                temp.push_back(root -> val);
                
                if ( root -> left ) q.push(root -> left );
                if ( root -> right ) q.push( root -> right);
                
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};
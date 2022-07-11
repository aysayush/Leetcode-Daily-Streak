class Solution {
public:
    
    // AYUSH
    
    vector<int> rightSideView(TreeNode* root)
    {
        if(root==NULL)
        {
            return {};
        }
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0)
        {
           int s=q.size();
            v.push_back(q.front()->val);
            while(s>0)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->right) 
                {
                    q.push(node->right);
                }
                if(node->left) 
                {
                    q.push(node->left);
                }
                s--;
            }
        }
        return v;
        
    }
};
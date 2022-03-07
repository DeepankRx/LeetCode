class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> subAns;
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
                TreeNode *node = q.front();
                q.pop();
                
                subAns.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(subAns);
        }
        reverse(ans.begin(),ans.end());
        
        return ans ;
    }
};
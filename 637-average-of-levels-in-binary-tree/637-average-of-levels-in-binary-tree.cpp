class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {   double sum=0,avg;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            avg = sum/size;
            ans.push_back(avg);
        }
        return ans;
    }
};
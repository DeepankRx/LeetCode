class Solution {
public:
    vector<int> ans;
    void inOrder(TreeNode *root)
    {
        if(root==NULL)
            return ;
        inOrder(root->left);
        ans.push_back(root->val);
        inOrder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inOrder(root);
        int temp;
        for(int i=0;i<ans.size()-1;i++)
        {
            cout<<ans.at(i)<<" ";
            if(ans.at(i)<ans.at(i+1))
            {
                continue;
            }
            else
            {
                temp = i;
                break;
            }
        }
        if(temp==ans.size()-1)
            return true;
        return false;
    }
};
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
    vector<int> inOrder(TreeNode *root,vector<int> ans)
    {
        if(root==nullptr)
            return ans;
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->val);
            return ans;
        }
        if(root->left)
          ans =  inOrder(root->left,ans);
        if(root->right)
           ans = inOrder(root->right,ans);
       return ans;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> ans1,ans2;
        ans1 = inOrder(root1,ans1);
        ans2 = inOrder(root2,ans2);
        if(ans1.size() != ans2.size())
            return false;
        for(int i=0;i<ans1.size();i++)
        {
            if(ans1.at(i)!=ans2.at(i))
                return false;
        }
        return true;
    }
};
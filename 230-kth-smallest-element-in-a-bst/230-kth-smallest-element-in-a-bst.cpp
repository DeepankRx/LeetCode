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
    int count=0,ans=0;
    void inOrder(TreeNode *root,int k)
    {
        if(root==nullptr)
            return;
        inOrder(root->left,k);
        cout<<root->val<<" ";
        count++;
        if(count==k)
        {
            ans = root->val;
        }
         inOrder(root->right,k);
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
       inOrder(root,k);
        return ans;
    }
};
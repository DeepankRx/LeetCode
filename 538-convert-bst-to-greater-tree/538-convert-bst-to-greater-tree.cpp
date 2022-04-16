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
    int sum = 0;
    void reverseInOrder(TreeNode *root)
    {
        
        if(root==nullptr)
            return ;
        reverseInOrder(root->right);
        sum+=root->val;
        root->val = sum;
        reverseInOrder(root->left);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
       reverseInOrder(root);
        return root;
        
    }
};
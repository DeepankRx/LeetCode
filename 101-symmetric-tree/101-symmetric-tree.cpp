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
    bool check(TreeNode *leftSubTree,TreeNode *rightSubTree)
    {
        if(leftSubTree==NULL && rightSubTree==NULL)
            return true;
        if(leftSubTree!=NULL && rightSubTree==NULL)
            return false;
        if(leftSubTree==NULL && rightSubTree!=NULL)
            return false;
        if(leftSubTree->val != rightSubTree->val)
            return false;
        return check(leftSubTree->left,rightSubTree->right) && check(leftSubTree->right,rightSubTree->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};
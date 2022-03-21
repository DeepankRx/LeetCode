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
    bool inorder(TreeNode *root,int temp,int target)
    {
         if(!root->left and !root->right){
        // cout<<temp<<endl;
        temp+=root->val;
        if(temp==target)return true;
        else return false;
    }
    bool left=false,right=false;
    if(root->left)
        left=inorder(root->left,temp+root->val,target);
    if(root->right)
        right=inorder(root->right,temp+root->val,target);
    return left or right;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
            return false;
        return inorder(root,0,targetSum);
    }
};
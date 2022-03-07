class Solution {
    TreeNode *prev = NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        increasingBST(root->right);
           root->right = prev;
        
        TreeNode *leftTree;
        leftTree = root->left;
        root->left = NULL;
        prev = root;
        
        increasingBST(leftTree);
         
        return prev;
      
    }
};
class Solution {
    int sumRootToLeaf(TreeNode* root, int sum) {
        if(root == NULL)
            return 0;
        sum = (sum << 1) + root -> val;
        if(!root -> left && !root->right )
            return sum ;
        return sumRootToLeaf(root->left,sum) + sumRootToLeaf(root->right,sum);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return sumRootToLeaf(root, 0);
    }
};
class Solution {
public:
    bool helper(TreeNode* root ,long minVal ,long maxVal){
        if(!root)
            return true;
        
        if(root->val >= maxVal || root->val <= minVal) return  false ;
        
        return helper(root->left,minVal,root->val) && helper(root->right,root->val,maxVal);
            
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return false;
        return helper(root, LONG_MIN, LONG_MAX) ;
    }
};
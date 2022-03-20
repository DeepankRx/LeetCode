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
   void store(TreeNode *root,vector<int> &v)
{
    if(root==NULL)
        return;
    store(root->left,v);
    v.push_back(root->val);
    store(root->right,v);
}  
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans ;
        store(root1,ans);
        store(root2,ans);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
            cout<<ans.at(i)<<" ";
        return ans;
    }
};
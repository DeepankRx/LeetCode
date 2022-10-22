/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    void inOrder(TreeNode *root, unordered_map<int, int> &mp)
    {
        if (root == NULL) return;
        inOrder(root->left, mp);
        mp[root->val]++;
        inOrder(root->right, mp);
    }
    public:
        vector<int> findMode(TreeNode *root)
        {
            unordered_map<int, int> mp;
            inOrder(root, mp);
            int max = INT_MIN;
            for (auto m: mp)
            {
                if (m.second > max)
                {
                    max = m.second;
                }
            }
            vector<int> ans;
            for (auto m: mp)
            {
                if (m.second == max)
                {
                    ans.push_back(m.first);
                }
            }
            return ans;
        }
};
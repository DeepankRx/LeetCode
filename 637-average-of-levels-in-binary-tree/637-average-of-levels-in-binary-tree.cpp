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
    public:
        vector<double> averageOfLevels(TreeNode *root)
        {
            queue<TreeNode*> q;
            q.push(root);
            vector<double> ans;
            while (!q.empty())
            {
                int size = q.size();
                double sum = 0;
               	//after each level

                for (int i = 0; i < size; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    if (temp->left)
                        q.push(temp->left);
                    if (temp->right)
                        q.push(temp->right);

                   	// cout << temp->val << "\n";
                    sum += temp->val;
                }
                ans.push_back(sum / size);
            }
            return ans;
        }
};